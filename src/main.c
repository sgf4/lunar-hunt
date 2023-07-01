#include <ncurses.h>
#include "game.h"

int main() {
    initscr();  // Initialize ncurses
    noecho();
    curs_set(0);

    game_loop();

    endwin();   // End ncurses

    return 0;
}
