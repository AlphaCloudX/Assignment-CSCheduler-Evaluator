#include <stdio.h>
#include <string.h>
#define NUMBER_PROFS 6
#define NUMBER_COURSES 10
#define MAX_STR 35
static char coursesToCheck[][MAX_STR] ={Mobile App Development, Web Development, Database Management, Artificial Intelli
gence, Network Security, Cloud Computing, Software Testing, Game Development, IoT Programming, Machine Learning, };

static int courseIDs[NUMBER_COURSES] ={1900, 2150, 1700, 2500, 2850, 3200, 1950, 3700, 3100, 4200, };

static char profsToCheck[NUMBER_PROFS][MAX_STR] = {Sam, Lila, Kumar, Elena, Priya, Mark, };

static int profsTeachingCourses[NUMBER_PROFS][NUMBER_COURSES] ={{0, 2150, 1700, 0, 0, 0, 1950, 0, 3100, 0},{1900, 0, 0,
2500, 0, 0, 0, 3700, 0, 0},{1900, 2150, 1700, 0, 2850, 0, 1950, 0, 0, 4200},{0, 0, 0, 2500, 0, 3200, 0, 0, 3100, 0},{190
0, 0, 1700, 0, 0, 0, 1950, 3700, 0, 0},{0, 2150, 0, 0, 2850, 3200, 0, 0, 0, 4200}};

static int task6Validation[NUMBER_COURSES] ={3,3,3,2,2,2,3,2,2,2,};

#define avg 4.00


#define inputedIntegerN 2
#define expectedReturnValueN 6