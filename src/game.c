#include <ncurses.h>
#include "game.h"
#include "player.h"
#include "level.h"

void game_loop() {
    while (1) {
        erase();
        level_update(level_list[0]);
        refresh();
    }
}
