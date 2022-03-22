#include <stdlib.h>
#include <stdio.h>

#include "../include/Defence.h"


int main() {
  BattleField battleField;

  createPlayers(&battleField);
  buyPistols(&battleField);
  startBattle(&battleField);

 // printf("%d %d\n", battleField.players[0].playerData.health, battleField.players[0].playerData.armor);
//printf("%d %d\n", battleField.players[1].playerData.health, battleField.players[1].playerData.armor);
//printf("%d %d %d %d\n", battleField.players[0].pistol.pistolType, battleField.players[0].pistol.damagePerRound,battleField.players[0].pistol.clipSize,battleField.players[0].pistol.remainingAmmo);
//printf("%d %d %d %d\n", battleField.players[1].pistol.pistolType, battleField.players[1].pistol.damagePerRound,battleField.players[1].pistol.clipSize,battleField.players[1].pistol.remainingAmmo);

  

//  printf("%d %d\n", battleField.players[0].playerData.health, battleField.players[0].playerData.armor);
//  printf("%d %d\n", battleField.players[1].playerData.health, battleField.players[1].playerData.armor);
//  printf("%d %d %d %d\n", battleField.players[0].pistol.pistolType, battleField.players[0].pistol.damagePerRound,battleField.players[0].pistol.currClipBullets,battleField.players[0].pistol.remainingAmmo);
//  printf("%d %d %d %d\n", battleField.players[1].pistol.pistolType, battleField.players[1].pistol.damagePerRound,battleField.players[1].pistol.currClipBullets,battleField.players[1].pistol.remainingAmmo);


  return EXIT_SUCCESS;
}
