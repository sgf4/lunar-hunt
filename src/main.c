#include <ncurses.h>

int main() {
    initscr();  // Initialize ncurses

    start_color();  // Enable color support
    curs_set(0);
    init_pair(1, COLOR_RED, COLOR_BLACK);  // Initialize color pair 1 (red text on black background)

    attron(COLOR_PAIR(1));  // Turn on color pair 1
    printw("Hello, World!");  // Print the text
    attroff(COLOR_PAIR(1));  // Turn off color pair 1

    refresh();  // Refresh the screen

    getch();  // Wait for user input

    endwin();   // End ncurses

    return 0;
}