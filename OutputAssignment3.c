#pragma GCC diagnostic ignored "-Wunused-variable"

#include "givenA3.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* Task 1 */
int readCourse(
        char filename[MAX_STR],
        char courseName[NUMBER_COURSES][MAX_STR],
        int courseID[NUMBER_COURSES]
);


/* Task 2 */
int readProfs(
        char filename[MAX_STR],
        int courseID[NUMBER_COURSES],
        char profName[NUMBER_PROFS][MAX_STR],
        int coursesTaught[NUMBER_PROFS][NUMBER_COURSES]
);


/* Task 3 */
int nCourses(
        int n,
        char profName[NUMBER_PROFS][MAX_STR],
        int coursesTaught[NUMBER_PROFS][NUMBER_COURSES]
);


/* Task 4 */
int getCourseName(
        int courseNum,
        char cNameFound[MAX_STR],
        char courseName[NUMBER_COURSES][MAX_STR],
        int courseID[NUMBER_COURSES]
);


/* Task 5 */
int getCourseNum(
        char cName[MAX_STR],
        int *cNumFound,
        char courseName[NUMBER_COURSES][MAX_STR],
        int courseID[NUMBER_COURSES]
);


/* Task 6 */
int profsTeachingCourse(
        int courseNum,
        char profName[NUMBER_PROFS][MAX_STR],
        int coursesTaught[NUMBER_PROFS][NUMBER_COURSES]
);

/* Task 7 */
float avgNumCourses(
        int coursesTaught[NUMBER_PROFS][NUMBER_COURSES]
);


/*Task 8 */
void hhistogram(
        char profName[NUMBER_PROFS][MAX_STR],
        int coursesTaught[NUMBER_PROFS][NUMBER_COURSES]
);


int main() {

    //declare all variables here
    //Integer values to keep track of the outcomes
    int o = 0;

    //Float value to keep track of the return value for avg classes taught
    float seven = 00.00f;

    //All course names stored in a 2d array
    char courseName[NUMBER_COURSES][MAX_STR] = {"\0"};

    //All course id's stored in array
    int courseID[NUMBER_COURSES] = {0};;

    //All Prof names stored in 2d array
    char profName[NUMBER_PROFS][MAX_STR] = {"\0"};

    //All courses taught by professor stored in 2d array
    int coursesTaught[NUMBER_PROFS][NUMBER_COURSES] = {0};

    //Store the input from the user
    char inputFromUser[MAX_STR] = "\0";

    //Store the course name found
    char cNameFound[MAX_STR] = "\0";

    //Return value for case 3
    int returnValueForThree = 0;

    //Used for when functions require an integer input
    int inputForFunctionsThatRequireIntegers = 0;

    //Text file definitions
    char cFile[MAX_STR] = "courses.txt";
    char dFile[MAX_STR] = "data.txt";

    printf("There may be output here from your method, disregard\n");
    o = readCourse(cFile, courseName, courseID);
    printf("\n\n");

    printf("\n\n==============================TASK 1 VALIDATION==============================\n");
    printf("GOTTEN   RETURN VALUE FROM readCourse: %d\n", o);
    printf("EXPECTED RETURN VALUE FROM readCourse: 1\n");
    if (o == 1) {
        printf("CORRECT VALUE RETURNED\n");
    } else {
        printf("INCORRECT VALUE RETURNED\n");
    }

    printf("\n");

    for (int i = 0; i < NUMBER_COURSES; ++i) {
        printf("COURSE NAME CHECK: |      GOT:[%s]\n", courseName[i]);
        printf("COURSE NAME CHECK: | EXPECTED:[%s]\n", coursesToCheck[i]);
        printf("COURSE CODE CHECK: |      GOT:[%d]\n", courseID[i]);
        printf("COURSE CODE CHECK: | EXPECTED:[%d]\n", courseIDs[i]);

        //Compare if the strings and integers are the same
        if ((strcmp(courseName[i], coursesToCheck[i]) == 0) && (courseID[i] == courseIDs[i])) {
            printf("PASSED :)\n");
        } else {
            printf("FAILED :(\n");
        }
        printf("\n\n");
    }



    printf("There may be output here from your method, disregard\n");
    o = readProfs(dFile, courseID, profName, coursesTaught);
    printf("\n\n");

    
    printf("\n\n==============================TASK 2 VALIDATION==============================\n");
    printf("GOTTEN   RETURN VALUE FROM readCourse: %d\n", o);
    printf("EXPECTED RETURN VALUE FROM readCourse: 1\n");
    if (o == 1) {
        printf("CORRECT VALUE RETURNED\n");
    } else {
        printf("INCORRECT VALUE RETURNED\n");
    }

    printf("\n");

    for (int i = 0; i < NUMBER_PROFS; ++i) {
        printf("PROF NAME CHECK: |      GOT:[%s]\n", profName[i]);
        printf("PROF NAME CHECK: | EXPECTED:[%s]\n", profsToCheck[i]);

        for (int j = 0; j < NUMBER_COURSES; ++j) {
            printf("COURSE CODE CHECK   |[%d] | [%d]\n", coursesTaught[i][j], profsTeachingCourses[i][j]);

            if ((coursesTaught[i][j] == profsTeachingCourses[i][j]) && (strcmp(profName[i], profsToCheck[i]) == 0)) {
                printf("PASSED\n");
            } else {
                printf("FAILED\n");
            }

        }
        printf("\n\n");
    }

    


    
    printf("\n\n==============================TASK 3 VALIDATION==============================\n");


    printf("There may be output here from your method, disregard\n");
    o = nCourses(inputedIntegerN, profName, coursesTaught);
    printf("\n\n");
    
    printf("INPUT VALUE: [%d]\n", inputedIntegerN);
    printf("EXPECTED: [%d]\n", expectedReturnValueN);
    printf("     Got: [%d]\n", o);
    if (o == expectedReturnValueN) {
        printf("PASSED\n\n");
    } else {
        printf("FAILED\n\n");
    }

    


    
    printf("\n\n==============================TASK 4 and 5 VALIDATION==============================\n");
    

    for (int i = 0; i < NUMBER_COURSES; ++i) {

        printf("There may be output here from your method, disregard\n");
        o = getCourseName(courseIDs[i], cNameFound, courseName, courseID);
        printf("\n\n");
        
        printf("INPUT VALUE: [%d]\n", courseIDs[i]);
        printf("EXPECTED: [%s]\n", coursesToCheck[i]);
        printf("     GOT: [%s]\n\n", cNameFound);


        printf("There may be output here from your method, disregard\n");
        o = getCourseNum(coursesToCheck[i], &returnValueForThree, courseName, courseID);
        printf("\n\n");

        printf("INPUT VALUE: [%s]\n", coursesToCheck[i]);
        printf("EXPECTED: [%d]\n", courseIDs[i]);
        printf("     GOT: [%d]\n", returnValueForThree);

        if ((strcmp(coursesToCheck[i], cNameFound) == 0) && (courseIDs[i] == returnValueForThree)) {
            printf("PASSED\n\n");
        } else {
            printf("FAILED\n\n");
        }

        

    }

    
    printf("\n\n==============================TASK 6 VALIDATION==============================\n");
    

    for (int i = 0; i < NUMBER_COURSES; ++i) {
        printf("There may be output here from your method, disregard\n");
        o = profsTeachingCourse(courseIDs[i], profName, coursesTaught);
        printf("\n\n");

        
        printf("INPUT VALUE: [%d]\n", courseIDs[i]);
        printf("EXPECTED: [%d]\n", task6Validation[i]);
        printf("     GOT: [%d]\n", o);

        if (task6Validation[i] == o) {
            printf("PASSED\n\n");
        } else {
            printf("FAILED\n\n");
        }
        


    }


    
    printf("\n\n==============================TASK 7 VALIDATION==============================\n");

    printf("There may be output here from your method, disregard\n");
    seven = avgNumCourses(coursesTaught);
    printf("\n\n");
    
    printf("EXPECTED: [%.2f]\n", avg);
    printf("     GOT: [%.2f]\n", seven);
    


    return 0;
}
