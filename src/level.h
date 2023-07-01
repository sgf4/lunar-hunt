#pragma once
#include "player.h"

typedef const char** Level;

void level_update(Level level);

extern Level level_list[20];
