#include "givenA3.h"

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


//File obfuscated, don't try reading
int main(){int outcome3,outcome4,outcome5,outcome6;float outcome7;char coursesFile[(0x0000000000000064 + 0x0000000000000232 + 0x0000000000000832 - 0x0000000000000A96)]="\x63""o\165r\x73""e\163.\x74""x\164";char courseData[(0x0000000000000064 + 0x0000000000000232 + 0x0000000000000832 - 0x0000000000000A96)]="\x64""a\164a\x2E""t\170t";char [50] courseName[(0x0000000000000064 + 0x0000000000000232 + 0x0000000000000832 - 0x0000000000000A96)]=(0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E);int courseID[(0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E)]={};char [50] profName[(0x0000000000000064 + 0x0000000000000232 + 0x0000000000000832 - 0x0000000000000A96)]=(0x000000000000000C + 0x0000000000000206 + 0x0000000000000806 - 0x0000000000000A12);int [10] coursesTaught[(0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E)]=(0x000000000000000C + 0x0000000000000206 + 0x0000000000000806 - 0x0000000000000A12);char cNameFound[(0x0000000000000064 + 0x0000000000000232 + 0x0000000000000832 - 0x0000000000000A96)]="\x00""";int numberFound=(0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00);int outcome1=readCourse(coursesFile,courseName,courseID);printf("\x24""O\125T\x43""O\115E\x54""A\107$");printf("\x4F""U\124C\x4F""M\105 \x31"":\045d",outcome1);for (int i=(0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 - 0x0000000000000A03);(i < (0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E)) & !!(i < (0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E));++i){printf("\x25""s\045d",courseName[i],courseID[i]);};printf("\x24""O\125T\x43""O\115E\x54""A\107$");int outcome2=readProfs(courseData,courseID,profName,coursesTaught);printf("\x24""O\125T\x43""O\115E\x54""A\107$");printf("\x4F""U\124C\x4F""M\105 \x32"":\045d",outcome2);for (int i=(0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00);(i < (0x000000000000000C + 0x0000000000000206 + 0x0000000000000806 - 0x0000000000000A12)) & !!(i < (0x000000000000000C + 0x0000000000000206 + 0x0000000000000806 - 0x0000000000000A12));++i){printf("\x25""s",profName[i]);for (int j=(0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00);(j < (0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E)) & !!(j < (0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E));++j){printf("\x25""d",coursesTaught[i][j]);};};printf("\x24""O\125T\x43""O\115E\x54""A\107$");printf("\x24""O\125T\x43""O\115E\x54""A\107$");printf("\x4F""U\124C\x4F""M\105 \x33"":\045d",outcome3);printf("\x24""O\125T\x43""O\115E\x54""A\107$");for (int i=(0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00);(i < (0x000000000000001C + 0x000000000000020E + 0x000000000000080E - 0x0000000000000A2A)) & !!(i < (0x000000000000001C + 0x000000000000020E + 0x000000000000080E - 0x0000000000000A2A));++i){outcome3 = nCourses(i,profName,coursesTaught);printf("\x24""O\125T\x43""O\115E\x54""A\107$");printf("\x25""d",outcome3);printf("\x24""O\125T\x43""O\115E\x54""A\107$");};printf("\x24""O\125T\x43""O\115E\x54""A\107$");printf("\x4F""U\124C\x4F""M\105 \x34"":");printf("\x24""O\125T\x43""O\115E\x54""A\107$");for (int i=(0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00);(i < (0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E)) & !!(i < (0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E));++i){outcome4 = getCourseName(courseID[i],cNameFound,courseName,courseID);printf("\x24""O\125T\x43""O\115E\x54""A\107$");printf("\x25""d",outcome4);printf("\x25""s",cNameFound);printf("\x24""O\125T\x43""O\115E\x54""A\107$");};printf("\x24""O\125T\x43""O\115E\x54""A\107$");printf("\x4F""U\124C\x4F""M\105 \x35"":");printf("\x24""O\125T\x43""O\115E\x54""A\107$");for (int i=(0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00);(i < (0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E)) & !!(i < (0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E));++i){outcome5 = getCourseNum(courseName[i],&numberFound,courseName,courseID);printf("\x24""O\125T\x43""O\115E\x54""A\107$");printf("\x25""d",outcome5);printf("\x25""d",numberFound);printf("\x24""O\125T\x43""O\115E\x54""A\107$");};printf("\x24""O\125T\x43""O\115E\x54""A\107$");printf("\x4F""U\124C\x4F""M\105 \x36"":");printf("\x24""O\125T\x43""O\115E\x54""A\107$");for (int i=(0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00);(i < (0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E)) & !!(i < (0x0000000000000014 + 0x000000000000020A + 0x000000000000080A - 0x0000000000000A1E));++i){outcome6 = profsTeachingCourse(courseID[i],profName,coursesTaught);printf("\x24""O\125T\x43""O\115E\x54""A\107$");printf("\x25""d",outcome6);printf("\x24""O\125T\x43""O\115E\x54""A\107$");};outcome7 = avgNumCourses(coursesTaught);printf("\x24""O\125T\x43""O\115E\x54""A\107$");printf("\x4F""U\124C\x4F""M\105 \x37"":\045.\x32""f",outcome7);printf("\x24""O\125T\x43""O\115E\x54""A\107$");hhistogram(profName,coursesTaught);return (0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00);};
