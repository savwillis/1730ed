#include <cstdlib>
#include <ncurses.h>
#include <curses.h>

int main(const int argc, const char * argv [])
{
    initscr();
    int x, y;
    getmaxyx(stdscr, y, x);
    WINDOW* win = subwin(stdscr, y-4, x-3, 2, 2);
    box(win, 0, 0);
    mvwaddstr(win, 1, 1, "this is my string");
    wrefresh(win);
    addstr("Menu here");
    mvaddstr(0, ((x+1)/2)-8, "CSCI 1730 Editor");
    mvaddstr(y-1, 0, argv[1]);
    refresh();
    getch();
    endwin();
    return EXIT_SUCCESS;
}
