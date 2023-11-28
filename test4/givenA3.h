#include <stdio.h>
#include <string.h>
#define NUMBER_PROFS 12
#define NUMBER_COURSES 15
#define MAX_STR 50
static char coursesToCheck[][MAX_STR] ={Cyber-Physical Systems, Big Data Analytics, Mobile App Security, Digital Forensi
cs, Bioinformatics, Social Media Analytics, Information Retrieval, Embedded Systems, Computer Vision, Natural Language P
rocessing, Blockchain Applications, Human-Robot Interaction, Bio-inspired Computing, Cloud Security, Autonomous Vehicles
, };

static int courseIDs[NUMBER_COURSES] ={2150, 2500, 1950, 3200, 2750, 3650, 4400, 3850, 3000, 4300, 4900, 3500, 4200, 465
0, 5100, };

static char profsToCheck[NUMBER_PROFS][MAX_STR] = {Olivia, Zayn, Eva, Aarav, Emma, Sohan, Kian, Nina, Aiden, Sara, Owen,
 Maya, };

static int profsTeachingCourses[NUMBER_PROFS][NUMBER_COURSES] ={{2150, 0, 1950, 0, 2750, 0, 4400, 0, 0, 4300, 0, 3500, 0
, 4650, 0},{0, 2500, 0, 3200, 0, 3650, 0, 3850, 3000, 0, 4900, 0, 4200, 0, 5100},{2150, 0, 1950, 0, 2750, 0, 0, 0, 3000,
 0, 0, 3500, 0, 0, 5100},{0, 2500, 0, 3200, 0, 3650, 4400, 0, 0, 4300, 4900, 0, 4200, 4650, 0},{2150, 0, 1950, 0, 2750,
3650, 0, 3850, 0, 0, 0, 3500, 0, 4650, 5100},{0, 2500, 0, 3200, 0, 0, 4400, 0, 3000, 4300, 0, 0, 4200, 0, 5100},{2150, 0
, 1950, 0, 2750, 0, 4400, 0, 0, 4300, 0, 3500, 0, 4650, 0},{0, 2500, 0, 3200, 0, 3650, 0, 3850, 3000, 0, 4900, 0, 4200,
0, 5100},{2150, 0, 1950, 0, 2750, 0, 0, 0, 3000, 0, 0, 3500, 0, 0, 5100},{0, 2500, 0, 3200, 0, 3650, 4400, 0, 0, 4300, 4
900, 0, 4200, 4650, 0},{2150, 0, 1950, 0, 2750, 3650, 0, 3850, 0, 0, 0, 3500, 0, 4650, 5100},{0, 2500, 0, 3200, 0, 0, 44
00, 0, 3000, 4300, 0, 0, 4200, 0, 5100}};

static int task6Validation[NUMBER_COURSES] ={6,6,6,6,6,6,6,4,6,6,4,6,6,6,8,};

#define avg 7.33