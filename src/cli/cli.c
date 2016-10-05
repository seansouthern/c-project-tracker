#include <ncurses.h>


#define HEIGHT 30
#define WIDTH  30

int main(int argc,char *argv[])
{
	
	//WINDOW *menu_win;
	
	
	initscr();
	
	cbreak();
	noecho();
	nonl();
	intrflush(stdscr, FALSE);
	keypad(stdscr, TRUE);
	
	//menu_win = newwin(HEIGHT, WIDTH, 0, 0);
       
	
	if(has_colors() == FALSE){
		endwin();
		printf("Your terminal does not support color\n");
		return(-1);
	}

//	start_color();
//	attron(COLOR_PAIR(6));

	const char * strong = "Press F1 to exit";
	
	printw(strong);
	refresh();

	getchar();

	endwin();
	return 0;
}
