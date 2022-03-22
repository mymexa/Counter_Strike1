#include "../include/Attack.h"

#include <stdlib.h>
#include <stdio.h>

void reloading(int PlayerID)
{

    if (createdplayers.players[PlayerID].pistol.clipSize > createdplayers.players[PlayerID].pistol.remainingAmmo)
    {
        createdplayers.players[PlayerID].pistol.currClipBullets = createdplayers.players[PlayerID].pistol.remainingAmmo;
        createdplayers.players[PlayerID].pistol.remainingAmmo = 0;
        attack.reloadingFlag = 1;
    }
    else
    {
        createdplayers.players[PlayerID].pistol.currClipBullets = createdplayers.players[PlayerID].pistol.clipSize;
        createdplayers.players[PlayerID].pistol.remainingAmmo -= createdplayers.players[PlayerID].pistol.clipSize;
        attack.reloadingFlag = 1;
    }
    if (createdplayers.players[PlayerID].pistol.currClipBullets == 0 && createdplayers.players[PlayerID].pistol.remainingAmmo == 0)
    {
        attack.reloadingFlag = 2;
    }
}

void attackPlayer(int PlayerID)
{
    attack.shots = 0;
    attack.reloadingFlag = 0;
    attack.gunType = createdplayers.players[PlayerID].pistol.pistolType;
    attack.damageToArmor = 0;
    attack.damageToHealth = 0;

    if (createdplayers.players[PlayerID].pistol.currClipBullets == 0 && createdplayers.players[PlayerID].pistol.remainingAmmo == 0)
    {
        attack.reloadingFlag = 2;
    }

    if (attack.reloadingFlag != 2)
    {

        switch (createdplayers.players[PlayerID].pistol.pistolType)
        {
        case GLOCK:
            attack.shots = ROUNDS_PER_FIRE;
            attack.damageToHealth = createdplayers.players[PlayerID].pistol.damagePerRound / 2;
            attack.damageToArmor = createdplayers.players[PlayerID].pistol.damagePerRound / 2;

            if (createdplayers.players[PlayerID].pistol.currClipBullets < ROUNDS_PER_FIRE)
            {
                attack.shots = createdplayers.players[PlayerID].pistol.currClipBullets;
                createdplayers.players[PlayerID].pistol.currClipBullets -= attack.shots;
                reloading(PlayerID);
            }
            else
            {
                createdplayers.players[PlayerID].pistol.currClipBullets -= attack.shots;
            }

            break;

        case DESERT_EAGLE:

            if (createdplayers.players[PlayerID].pistol.currClipBullets == 0)
            {
                reloading(PlayerID);
            }
            else
            {
                attack.shots = 1;
                attack.damageToHealth = createdplayers.players[PlayerID].pistol.damagePerRound / 4 * 3;
                attack.damageToArmor = createdplayers.players[PlayerID].pistol.damagePerRound / 4;
                createdplayers.players[PlayerID].pistol.currClipBullets -= 1;
            }
        }
    }
}