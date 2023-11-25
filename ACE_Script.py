from subprocess import run, PIPE
import os
import sys
import csv
import re


def find_outcome_tags(text):
    pattern = re.compile(r'\$OUTCOMETAG\$(.*?)\$OUTCOMETAG\$', re.DOTALL)
    matches = re.findall(pattern, text)
    return matches


# Fancy Colours For Terminal
class bcolors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKCYAN = '\033[96m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'


# Change Limit
maxInt = sys.maxsize

while True:
    # decrease the maxInt value by factor 10
    # as long as the OverflowError occurs.

    try:
        csv.field_size_limit(maxInt)
        break
    except OverflowError:
        maxInt = int(maxInt / 10)

# Download dataset
if not os.path.isfile("dataFiles.csv"):
    print("Downloading Validation Data")
    run(["wget", "https://raw.githubusercontent.com/AlphaCloudX/Assignment-CSCheduler-Evaluator/main/dataFiles.csv"])

# Run until the user provides the right name for their methods.c file
invalid = True
fileName = ""

while invalid:
    print("Please enter the full file name of the c file that contains your methods.\n"
          "For example myMethods.c\n"
          "This will be used to recompile the program for every new test case")

    fileName = input()
    if os.path.isfile(f"./{fileName}"):
        invalid = False
        print(f"{bcolors.OKGREEN}Located File Successfully!{bcolors.ENDC}")
    else:
        print(f"{bcolors.FAIL}Could Not Locate {fileName}{bcolors.ENDC}")

print("Would You Like To Show Debug Info -Helpful for manually validating test cases if something breaks\n"
      "1 --> Yes\n"
      "0 --> No (Default)\n")

outputDebugStats = input(">")

sys.stdout.flush()

print(chr(27) + "[2J")

f = open("dataFiles.csv", "r")
fReader = csv.reader(f, delimiter=",")

count = 1

# Loop through each test case
for row in fReader:
    currentCase = f"================================\nCHECKING TEST CASE {count}\n================================\n"

    print(currentCase)

    # Write These Files To The System So They Can Be Compiled And Run
    coursesTXT = open("courses.txt", "w+")
    coursesTXT.write(row[0])
    coursesTXT.close()

    dataTXT = open("data.txt", "w+")
    dataTXT.write(row[1])
    dataTXT.close()

    a3TXT = open("givenA3.h", "w+")
    a3TXT.write(f"""#include <stdio.h>
#include <string.h>
#define NUMBER_PROFS {row[2]}
#define NUMBER_COURSES {row[3]}
#define MAX_STR {row[4]}
#define task3NSize {row[5]}""")
    a3TXT.close()

    # Command to run compilor for a new input text file
    command = f'gcc -std=c99 {fileName} ObfuscatedAutoGraderOutput.c -o Assignment3Validation.out'
    run(command, shell=True)

    sys.stdout.flush()

    # Command to run C program and redirect the output into a json file so we can process it
    command = './Assignment3Validation.out'
    p = run(command, shell=True, bufsize=1, stdout=PIPE, text=True)
    pOUT = "".join(find_outcome_tags(p.stdout.replace("\r\n", "").replace(" ", "").replace("\n", "").replace("\t", "")))
    sys.stdout.flush()

    if pOUT == row[6]:
        print(f"{bcolors.OKGREEN}PASSED{bcolors.ENDC}")
        print("EXPECTED:" + row[6])
        print("GOT     :" + pOUT)
        print()
    else:
        print(f"{bcolors.FAIL}FAILED{bcolors.ENDC}")
        print("EXPECTED:" + row[6])
        print("GOT     :" + pOUT)
        print()

    count += 1

f.close()
