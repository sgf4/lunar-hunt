#include "level.h"
#include "player.h"
#include <ncurses.h>

void level_update(Level l) {
    // Draw map
    for (int x=0,y=0;;) {
        char c = l[y][x];
        switch (c) {
        case '\0': 
            y++; x=0;
            continue;
        case 'e':
            goto end;
        }
        mvaddch(y, x++, c); // Draw character at (x, y)
    }
end:
    player_update(&player1);
}


Level level_list[] = {
[0] = (const char*[]) {
"                                        ",
"#############################           ",
"#                           #           ",
"#   P                       #           ",
"#                           #           ",
"#                           #           ",
"#                           #           ",
"#                           #########   ",
"#                                       ",
"#                           #########   ",
"#                           #           ",
"#                           #           ",
"#                           #           ",
"#                           #           ",
"#                           #           ",
"#############################           e"
}
};
