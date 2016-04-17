
#include <ncurses.h>


#define HEIGHT 30
#define WIDTH  30

int main(int argc,char *argv[])
{
	
	WINDOW *menu_win;
	
	initscr();
	clear();
	raw();
	noecho();

	menu_win = newwin(HEIGHT,WIDTH,3,3);
	
	keypad(menu_win, TRUE);	

	
	if(has_colors() == FALSE){
		endwin();
		printf("Your terminal does not support color\n");
		return(-1);
	}

	start_color();
	attron(COLOR_PAIR(6));

	printw("Press F1 to exit.");
	refresh();


	while(getch() != KEY_F(1) )
	{
		if(getch() == KEY_UP){
			
		}
		else if(getch() == KEY_DOWN){

		}
		
	}
	
	endwin();
	return 0;
}
