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

}

void scoreTeamB1()
{

}

void scoreTeamB2()
{

}

void scoreTeamB3()
{

}

char *getScore()
{
    return tab;
}