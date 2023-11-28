#include <stdio.h>
#include <string.h>
#define NUMBER_PROFS 3
#define NUMBER_COURSES 19
#define MAX_STR 50
static char coursesToCheck[][MAX_STR] ={Python Programming \{^-^}/ < Amazing ascii art, Web Development, Data Science Es
sentials, Mobile App Development, Software Engineering Principles:), Network Administration, Digital Marketing Strategie
s, Cloud Computing Technologies, Game Development Fundamentals, Database Management Systems, User Experience (UX) Design
, Internet of Things (IoT), Machine Learning Basics, Advanced Data Structures, Blockchain Applications, Computer Vision
and Image Processing, Human-Computer Interaction, Bioinformatics and Computational Biology, Quantum Computing Concepts,
};

static int courseIDs[NUMBER_COURSES] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 10000, };

static char profsToCheck[NUMBER_PROFS][MAX_STR] = {Professor One Two Three Four, Bob, Creative Professor 101 Name, };

static int profsTeachingCourses[NUMBER_PROFS][NUMBER_COURSES] ={{1, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
17, 18, 10000},{0, 2, 3, 4, 5, 6, 0, 8, 9, 10, 11, 12, 0, 14, 15, 16, 17, 18, 10000},{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
 12, 13, 14, 15, 16, 17, 18, 10000}};

static int task6Validation[NUMBER_COURSES] ={2,2,3,3,3,3,2,3,3,3,3,3,2,3,3,3,3,3,3,};

#define avg 17.67


#define inputedIntegerN 0
#define expectedReturnValueN 3