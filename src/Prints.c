#include <stdlib.h>
#include <stdio.h>

#include "../include/Prints.h"

void printEnemyStats()
{
    switch (temp_shots)
    {

    case 1:
        printf("Enemy left with: %d health and %d armor\n", buffer[0][0], buffer[0][1]);
        break;
    case 2:
        printf("Enemy left with: %d health and %d armor\n", buffer[0][0], buffer[0][1]);
        printf("Enemy left with: %d health and %d armor\n", buffer[1][0], buffer[1][1]);
        break;
    case 3:
        printf("Enemy left with: %d health and %d armor\n", buffer[0][0], buffer[0][1]);
        printf("Enemy left with: %d health and %d armor\n", buffer[1][0], buffer[1][1]);
        printf("Enemy left with: %d health and %d armor\n", buffer[2][0], buffer[2][1]);
    }
}

void printReloadStats(int PlayerID)
{

    switch (attack.reloadingFlag)
    {
    case 1:
        printf("Reloading...\ncurrClipBullets: %d, remainingAmmo: %d\n", createdplayers.players[PlayerID].pistol.currClipBullets, createdplayers.players[PlayerID].pistol.remainingAmmo);
        break;
    case 2:
        printf("No ammo left\n");
    }
}

void printStartofRound(int PlayerID)
{
    printf("PlayerID %d turn:\n", PlayerID);
}

void printWinner(int PlayerID)
{
    printf("\nPlayer with ID: %d wins!\n\n", PlayerID);
}

void printEndofRound()
{
    printf("\n");
}