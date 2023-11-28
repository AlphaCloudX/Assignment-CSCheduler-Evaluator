#include <stdio.h>
#include <string.h>
#define NUMBER_PROFS 6
#define NUMBER_COURSES 10
#define MAX_STR 50
static char coursesToCheck[][MAX_STR] ={Programming, Introductory Programming, Object Oriented Programming, Data Structu
res, Software Systems Development and Integration, Intro to Databases, Analysis and design of Algorithms, Advanced OO, D
ata Mining, Cyber Security, };

static int courseIDs[NUMBER_COURSES] ={1300, 1500, 2430, 2520, 2750, 3530, 3490, 4450, 4600, 4750, };

static char profsToCheck[NUMBER_PROFS][MAX_STR] = {Ritu, Manav, Ben, Ricardo, Cathrine, Sooraj, };

static int profsTeachingCourses[NUMBER_PROFS][NUMBER_COURSES] ={{1300, 1500, 0, 0, 0, 3530, 0, 0, 0, 0},{0, 0, 2430, 252
0, 0, 0, 0, 0, 0, 0},{1300, 0, 0, 0, 0, 3530, 0, 4450, 0, 0},{0, 1500, 0, 0, 0, 3530, 3490, 0, 0, 0},{0, 0, 0, 0, 0, 0,
3490, 4450, 4600, 4750},{1300, 1500, 0, 0, 0, 0, 0, 0, 0, 0}};

static int task6Validation[NUMBER_COURSES] ={3,3,1,1,0,3,2,2,1,1,};

#define avg 2.83


#define inputedIntegerN 2
#define expectedReturnValueN 6