#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char tab[8] = "000:000";

void scoreInit()
{
    sprintf(tab, "000:000");
}

void scoreTeamA1()
{
    unsigned int scoreA = atoi(tab);
    char pom[4] = {0};
    scoreA += 1;
    sprintf(pom, "%03u", scoreA);
    memcpy(tab, pom, 3);
}

void scoreTeamA2()
{
    unsigned int scoreA = atoi(tab);
    char pom[4] = {0};
    scoreA += 2;
    sprintf(pom, "%03u", scoreA);
    memcpy(tab, pom, 3);
}

void scoreTeamA3()
{
    unsigned int scoreA = atoi(tab);
    char pom[4] = {0};
    scoreA += 3;
    sprintf(pom, "%03u", scoreA);
    memcpy(tab, pom, 3);
}

void scoreTeamB1()
{
    unsigned int scoreA = 0;
    unsigned int scoreB = 0;
    char pom[4] = {0};
    sscanf(tab, "%u:%u", &scoreA, &scoreB);
    scoreB += 1;
    sprintf(pom, "%03u", scoreB);
    memcpy(tab+4, pom, 3);
}

void scoreTeamB2()
{
    unsigned int scoreA = 0;
    unsigned int scoreB = 0;
    char pom[4] = {0};
    sscanf(tab, "%u:%u", &scoreA, &scoreB);
    scoreB += 2;
    sprintf(pom, "%03u", scoreB);
    memcpy(tab+4, pom, 3);
}

void scoreTeamB3()
{

}

char *getScore()
{
    return tab;
}