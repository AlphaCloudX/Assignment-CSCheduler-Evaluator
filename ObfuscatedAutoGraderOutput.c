#include "givenA3.h"

int readCourse( char filename[MAX_STR], char courseName[NUMBER_COURSES][MAX_STR], int courseID[NUMBER_COURSES] ); int readProfs( char filename[MAX_STR], int courseID[NUMBER_COURSES], char profName[NUMBER_PROFS][MAX_STR], int coursesTaught[NUMBER_PROFS][NUMBER_COURSES] ); int nCourses( int n, char profName[NUMBER_PROFS][MAX_STR], int coursesTaught[NUMBER_PROFS][NUMBER_COURSES] ); int getCourseName( int courseNum, char cNameFound[MAX_STR], char courseName[NUMBER_COURSES][MAX_STR], int courseID[NUMBER_COURSES] ); int getCourseNum( char cName[MAX_STR], int *cNumFound, char courseName[NUMBER_COURSES][MAX_STR], int courseID[NUMBER_COURSES] ); int profsTeachingCourse( int courseNum, char profName[NUMBER_PROFS][MAX_STR], int coursesTaught[NUMBER_PROFS][NUMBER_COURSES] ); float avgNumCourses( int coursesTaught[NUMBER_PROFS][NUMBER_COURSES] ); void hhistogram( char profName[NUMBER_PROFS][MAX_STR], int coursesTaught[NUMBER_PROFS][NUMBER_COURSES] ); int main() { int skadhjfgsdjhfg = 000, sadfsdafsdafsda = 000, jsdhfdsafjhv = 000, sdhjgfvsdajhgvf = 000, jhsdbfsdjahfb = 000, kjhjdsbfsjadkhfbdsa[NUMBER_COURSES] = {0},khjsdbfsadjkhfbsdjfkhb[NUMBER_PROFS][NUMBER_COURSES] = {0}; float kjdsfbsdkajhfbs = 0.0f; char jhsdfsdajhbf[MAX_STR] = "courses.txt", sdjkfhbsalkjfbsad[MAX_STR] = "data.txt", jksdhfbsadklhjbfs[NUMBER_COURSES][MAX_STR] = {"\0"}, kljbsdfksadjbf[NUMBER_PROFS][MAX_STR] = {"\0"}, kjbsfdksdajbf[MAX_STR] = "\0"; int iksdjfbhskdjhbfskbj = readCourse(jhsdfsdajhbf, jksdhfbsadklhjbfs, kjhjdsbfsjadkhfbdsa); printf("$OUTCOMETAG$"); printf("OUTCOME1:%d", iksdjfbhskdjhbfskbj); for (int i = 1; i < NUMBER_COURSES; ++i) { printf("%s%d", jksdhfbsadklhjbfs[i], kjhjdsbfsjadkhfbdsa[i]); } printf("$OUTCOMETAG$"); int outcome2 = readProfs(sdjkfhbsalkjfbsad, kjhjdsbfsjadkhfbdsa, kljbsdfksadjbf, khjsdbfsadjkhfbsdjfkhb); printf("$OUTCOMETAG$"); printf("OUTCOME2:%d", outcome2); for (int i = 0; i < NUMBER_PROFS; ++i) { printf("%s", kljbsdfksadjbf[i]); for (int j = 0; j < NUMBER_COURSES; ++j) { printf("%d", khjsdbfsadjkhfbsdjfkhb[i][j]); } } printf("$OUTCOMETAG$"); printf("$OUTCOMETAG$"); printf("OUTCOME3:"); printf("$OUTCOMETAG$"); for (int i = 0; i < task3NSize; ++i) { skadhjfgsdjhfg = nCourses(i, kljbsdfksadjbf, khjsdbfsadjkhfbsdjfkhb); printf("$OUTCOMETAG$"); printf("%d", skadhjfgsdjhfg); printf("$OUTCOMETAG$"); } printf("$OUTCOMETAG$"); printf("OUTCOME4:"); printf("$OUTCOMETAG$"); for (int i = 0; i < NUMBER_COURSES; ++i) { sadfsdafsdafsda = getCourseName(kjhjdsbfsjadkhfbdsa[i], kjbsfdksdajbf, jksdhfbsadklhjbfs, kjhjdsbfsjadkhfbdsa); printf("$OUTCOMETAG$"); printf("%d", sadfsdafsdafsda); printf("%s", kjbsfdksdajbf); printf("$OUTCOMETAG$"); } printf("$OUTCOMETAG$"); printf("OUTCOME5:"); printf("$OUTCOMETAG$"); for (int i = 0; i < NUMBER_COURSES; ++i) { jsdhfdsafjhv = getCourseNum(jksdhfbsadklhjbfs[i], &jhsdbfsdjahfb, jksdhfbsadklhjbfs, kjhjdsbfsjadkhfbdsa); printf("$OUTCOMETAG$"); printf("%d", jsdhfdsafjhv); printf("%d", jhsdbfsdjahfb); printf("$OUTCOMETAG$"); } printf("$OUTCOMETAG$"); printf("OUTCOME6:"); printf("$OUTCOMETAG$"); for (int i = 0; i < NUMBER_COURSES; ++i) { sdhjgfvsdajhgvf = profsTeachingCourse(kjhjdsbfsjadkhfbdsa[i], kljbsdfksadjbf, khjsdbfsadjkhfbsdjfkhb); printf("$OUTCOMETAG$"); printf("%d", sdhjgfvsdajhgvf); printf("$OUTCOMETAG$"); } kjdsfbsdkajhfbs = avgNumCourses(khjsdbfsadjkhfbsdjfkhb); printf("$OUTCOMETAG$"); printf("OUTCOME7:%.2f", kjdsfbsdkajhfbs); printf("$OUTCOMETAG$"); hhistogram(kljbsdfksadjbf, khjsdbfsadjkhfbsdjfkhb); return 0; }
