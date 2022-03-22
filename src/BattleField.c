#include "../include/Prints.h"

#include <stdio.h>

void createPlayers(BattleField *bf)
{
  if (bf)
  {
  } // silence ununsed variable warning. Remove me

  int playerHealth = 0;
  int playerArmor = 0;

  for (int i = 0; i < PLAYERS_COUNT; ++i)
  {
    scanf("%d %d", &playerHealth, &playerArmor);
    createdplayers.players[i].playerId = i;
    createdplayers.players[i].playerData.health = playerHealth;
    createdplayers.players[i].playerData.armor = playerArmor;
  }

  *bf = createdplayers;
}

void buyPistols(BattleField *bf)
{
  if (bf)
  {
  } // silence ununsed variable warning. Remove me

  int pistolId = 0;
  int pistolDamagePerRound = 0;
  int pistolClipSize = 0;
  int pistolRemainingAmmo = 0;

  for (int i = 0; i < PLAYERS_COUNT; ++i)
  {
    scanf("%d %d %d %d", &pistolId, &pistolDamagePerRound, &pistolClipSize,
          &pistolRemainingAmmo);
    createdplayers.players[i].pistol.pistolType = pistolId;
    createdplayers.players[i].pistol.damagePerRound = pistolDamagePerRound;
    createdplayers.players[i].pistol.clipSize = pistolClipSize;
    createdplayers.players[i].pistol.remainingAmmo = pistolRemainingAmmo;
    createdplayers.players[i].pistol.currClipBullets = pistolClipSize;
  }

  *bf = createdplayers;
}

void startBattle(BattleField *bf)
{
  if (bf)
  {
  } // silence ununsed variable warning. Remove me

  while (createdplayers.players[PLAYER_ONE].playerData.health && createdplayers.players[PLAYER_TWO].playerData.health >= 0)
  {
    // Player_one's turn:
    printStartofRound(PLAYER_ONE);
    attackPlayer(PLAYER_ONE);
    defencePlayer(PLAYER_TWO);
    printEnemyStats();

    if (createdplayers.players[PLAYER_TWO].playerData.health <= 0)
    {
      printWinner(PLAYER_ONE);
      break;
    }

    printReloadStats(PLAYER_ONE);
    printEndofRound();

    // Player_two's turn:
    printStartofRound(PLAYER_TWO);
    attackPlayer(PLAYER_TWO);
    defencePlayer(PLAYER_ONE);
    printEnemyStats();

    if (createdplayers.players[PLAYER_ONE].playerData.health <= 0)
    {
      printWinner(PLAYER_TWO);
      break;
    }

    printReloadStats(PLAYER_TWO);
    printEndofRound();
  }

  *bf = createdplayers;
}
