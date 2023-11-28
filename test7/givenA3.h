#include <stdio.h>
#include <string.h>
#define NUMBER_PROFS 2
#define NUMBER_COURSES 2
#define MAX_STR 100
static char coursesToCheck[][MAX_STR] ={THIS_IS_ONE_HUNDRED_CHARACTERS_LONG_THIS_IS_ONE_HUNDRED_CHARACTERS_LONG_THIS_IS_
ONE_HUNDRED_CHARAC, THIS_IS_ONE_HUNDRED_CHARACTERS_LONG_THIS_IS_ONE_HUNDRED_CHARACTERS_LONG_THIS_IS_ONE____ANOTHER_ONE,
};

static int courseIDs[NUMBER_COURSES] ={100, -100, };

static char profsToCheck[NUMBER_PROFS][MAX_STR] = {High Mile Club, Low Km Gang, };

static int profsTeachingCourses[NUMBER_PROFS][NUMBER_COURSES] ={{100, 0},{0, -100}};

static int task6Validation[NUMBER_COURSES] ={1,1,};

#define avg 1.00


#define inputedIntegerN 0
#define expectedReturnValueN 2