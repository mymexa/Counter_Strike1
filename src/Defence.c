#include <stdlib.h>
#include <stdio.h>

#include "../include/Defence.h"


void defencePlayer(int PlayerID)
{
    //int buffer[3][2]={0,0,0,0,0,0};
    temp_shots=0;

    if (attack.gunType == GLOCK)
    {
        temp_shots=attack.shots;
        switch (attack.reloadingFlag)
        {
        case 2:
            break;
        }
        for (int i = 0; i < attack.shots; i++)
        {
            if (createdplayers.players[PlayerID].playerData.health <= 0)
            {
                temp_shots = i;
                break;
            }
            if (createdplayers.players[PlayerID].playerData.armor >= attack.damageToArmor)
            {
                createdplayers.players[PlayerID].playerData.health -= attack.damageToHealth;
                createdplayers.players[PlayerID].playerData.armor -= attack.damageToArmor;
            }
            else
            {
                if (0 < createdplayers.players[PlayerID].playerData.armor && createdplayers.players[PlayerID].playerData.armor < attack.damageToArmor)
                {
                    createdplayers.players[PlayerID].playerData.health -= attack.damageToHealth;
                    createdplayers.players[PlayerID].playerData.armor -= attack.damageToArmor;
                    createdplayers.players[PlayerID].playerData.health += createdplayers.players[PlayerID].playerData.armor;
                    createdplayers.players[PlayerID].playerData.armor = 0;
                    // Can be done with adding vars to split dmg and negate dmg.
                }
                else
                {
                    createdplayers.players[PlayerID].playerData.health -= attack.damageToHealth + attack.damageToArmor;
                }
            }
            buffer[i][0] = createdplayers.players[PlayerID].playerData.health;
            buffer[i][1] = createdplayers.players[PlayerID].playerData.armor;
            //printf("Enemy left with: %d health and %d armor\n", createdplayers.players[PlayerID].playerData.health, createdplayers.players[PlayerID].playerData.armor);
        }
    }
    else
    {
        switch (attack.reloadingFlag)
        {
        case 2:
        temp_shots=0;
            break;
        case 0:
            temp_shots=1;
            if (createdplayers.players[PlayerID].playerData.armor >= attack.damageToArmor)
            {
                createdplayers.players[PlayerID].playerData.health -= attack.damageToHealth;
                createdplayers.players[PlayerID].playerData.armor -= attack.damageToArmor;
            }
            else
            {
                if (0 < createdplayers.players[PlayerID].playerData.armor && createdplayers.players[PlayerID].playerData.armor < attack.damageToArmor)
                {
                    createdplayers.players[PlayerID].playerData.health -= attack.damageToHealth;
                    createdplayers.players[PlayerID].playerData.armor -= attack.damageToArmor;
                    createdplayers.players[PlayerID].playerData.health += createdplayers.players[PlayerID].playerData.armor;
                    createdplayers.players[PlayerID].playerData.armor = 0;
                    // Can be done with adding vars to split dmg and negate dmg.
                }
                else
                {
                    createdplayers.players[PlayerID].playerData.health -= attack.damageToHealth + attack.damageToArmor;
                }
            }
            buffer[0][0] = createdplayers.players[PlayerID].playerData.health;
            buffer[0][1] = createdplayers.players[PlayerID].playerData.armor;

        }
    }
}

