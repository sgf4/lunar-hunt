#include "player.h"
#include <ncurses.h>

Player player1;

void player_update(Player* player) {
    mvaddch(player->y, player->x, '@');
    char m = getch();
    switch (m) {
    case 'w':
        player->y--;
        break;
    case 's':
        player->y++;
        break;
    case 'd':
        player->x++;
        break;
    case 'a':
        player->x--;
        break;
    }
}
