#include "graph.h"
#include <conio.h>
#include <windows.h> 
//#include <process.h>
int graph::w=50; 
int graph::h=30; 
#define Exit 33
 #define right 77
int main ()
{
	srand(time(NULL));
	graph g(25,40); 

	int Action;
	Action=right; 
	do
	{
		if (_kbhit())
		{
			Action=_getch();
		g.move_car(Action);
		}
		if (!g.movecars())
			break; 
		g.draw_graph();
		Sleep(20); 
	}
	while (Action!=Exit);
	for (int i=0; i<15; i++)
		cout<<endl; 
	for (int i=0;i<40; i++)
		cout<<" "; 
		cout<<"Game Over"; 

	_getch() ; 
		return 0; 
}