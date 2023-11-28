#include <stdio.h>
#include <string.h>

#define NUMBER_PROFS 10
#define NUMBER_COURSES 10
#define MAX_STR 35

static char coursesToCheck[][MAX_STR] = {"Mobile App Design", "Augmented Reality", "Digital Marketing", "Blockchain Technology",
                                         "Human-Computer Interaction", "Bioinformatics", "Quantum Computing", "Internet of Things (IoT)", 
                                         "Neural Networks", "Robotics"};

static int courseIDs[NUMBER_COURSES] = {1950, 2300, 1750, 3050, 2600, 3400, 4200, 3650, 2800, 4100};

static char profsToCheck[NUMBER_PROFS][MAX_STR] = {"Alexandra", "Vikram", "Isabella", "Santiago", "Luna", "Raj", "Sophia", "Kai", "Aisha", "Liam"};

static int profsTeachingCourses[NUMBER_PROFS][NUMBER_COURSES] = {
    {1950, 0, 1750, 0, 2600, 0, 4200, 0, 0, 4100},
    {0, 2300, 0, 3050, 0, 3400, 0, 3650, 2800, 0},
    {1950, 0, 1750, 0, 2600, 0, 0, 0, 2800, 0},
    {0, 2300, 0, 3050, 0, 3400, 4200, 0, 0, 4100},
    {1950, 0, 1750, 0, 2600, 3400, 0, 3650, 0, 0},
    {0, 2300, 0, 3050, 0, 0, 4200, 0, 2800, 4100},
    {1950, 2300, 1750, 3050, 2600, 3400, 4200, 3650, 2800, 4100},
    {1950, 2300, 1750, 3050, 2600, 3400, 4200, 3650, 2800, 4100},
    {1950, 2300, 1750, 3050, 2600, 3400, 4200, 3650, 2800, 4100},
    {1950, 2300, 1750, 3050, 2600, 3400, 4200, 3650, 2800, 4100}};

static int task6Validation[NUMBER_COURSES] = {7, 7, 7, 7, 7, 7, 7, 6, 7, 7};

#define avg 6.90

#define inputedIntegerN 7
#define expectedReturnValueN 4
