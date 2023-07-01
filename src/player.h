#pragma once
#include <stdbool.h>

typedef struct {
    int x;
    int y;
} Player;

extern Player player1;
void player_update(Player*);
