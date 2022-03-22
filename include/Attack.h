#ifndef ATTACK_H_
#define ATTACK_H_

#include "../include/BattleField.h"

typedef struct{
    int damageToHealth;
    int damageToArmor;
    int reloadingFlag;
    int shots;
    int gunType;
} Attack;

Attack attack;

void attackPlayer(int PlayerID);

#endif /* ATTACK_H_ */