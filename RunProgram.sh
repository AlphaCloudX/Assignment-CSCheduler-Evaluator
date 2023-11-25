#!/bin/bash
echo "Assignment-CSCheduler-Evaluator"
if [ ! -e "dataFiles.csv" ]; then
  wget 'https://raw.githubusercontent.com/AlphaCloudX/Assignment-CSCheduler-Evaluator/main/dataFiles.csv'
fi
if [ ! -e "AutoGraderOutput.c" ]; then
  wget 'https://raw.githubusercontent.com/AlphaCloudX/Assignment-CSCheduler-Evaluator/main/ObfuscatedAutoGraderOutput.c'
fi
if [ ! -e "ACE_Script.py" ]; then
  wget 'https://raw.githubusercontent.com/AlphaCloudX/Assignment-CSCheduler-Evaluator/main/ACE_Script.py'
fi
echo 'Scripts and Source Data Located... Running Program'
python3 'ACE_Script.py'
echo 'Program Finished... Cleaning Files'
rm 'dataFiles.csv'
rm 'data.txt'
rm 'courses.txt'
rm 'ObfuscatedAutoGraderOutput.c'
rm 'ACE_Script.py'
rm 'givenA3.h'
echo 'Downloading Original Files Back'
wget 'https://raw.githubusercontent.com/AlphaCloudX/Assignment-CSCheduler-Evaluator/main/defaults/courses.txt'
wget 'https://raw.githubusercontent.com/AlphaCloudX/Assignment-CSCheduler-Evaluator/main/defaults/data.txt'
wget 'https://raw.githubusercontent.com/AlphaCloudX/Assignment-CSCheduler-Evaluator/main/defaults/givenA3.h'