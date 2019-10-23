#include "graph.h"
#define Up 72
#define Dwon 80
#define Left 75
#define Right 77
graph::graph(int x,int y):c1(x,y) 
{
	
int u=0;  
	for (int j=0; j<h; j++)
	{
		for (int i=0;i<40;i++)
			cout<<" "; 
		
		cout<<'$';
		if (j==0||j==h-1)
		{
		for (int i=1; i<w-1; i++)
		{
			cout<<'$'; 
		}
		}
		else 
		{
			for(int i=1;i<w-1; i++)
			{ 
				u=0;
				for(int ctr=0; ctr<20; ctr++)
				{
					for (int h=0; h<3; h++)
					{
				if (i==c[h].X[ctr]&&j==c[h].Y[ctr]||c1.X[ctr]==i&&c1.Y[ctr]==j)
					{cout<<"*" ; u++;break;}
					}		
				}
				if (u>0)
				{ 
					continue; 
				}
					cout<<' ';
			}
		}
		   	cout<<'$';
		cout<<endl; 
	}
	cout<<"X= "<<c1.getx()<<"   "<<"Y= "<<c1.gety(); 
}

int graph::getw(){return w; }
int graph::geth(){return h; }
void graph::draw_graph()
{ 
	system("cls"); int u=0; 
	for (int j=0; j<h; j++)
	{
		for (int i=0;i<40;i++)
			cout<<" "; 
		cout<<'$';
		if (j==0||j==h-1)
		{
		for (int i=1; i<w-1; i++)
		{
			cout<<'$'; 
		}
		}
		else 
		{
			for(int i=1;i<w-1; i++)
			{ 
				u=0;
				for(int ctr=0; ctr<20; ctr++)
				{
					for (int h=0; h<3; h++)
					{
						if (i==c[h].X[ctr]&&j==c[h].Y[ctr]||c1.X[ctr]==i&&c1.Y[ctr]==j)
							{cout<<"*"; u++;break;}
					}		
				}
				if (u>0)
				{ 
					continue; 
				}
					cout<<' ';
			}
		}
		   	cout<<'$';
		cout<<endl; 
	}
	cout<<"X= "<<c1.getx()<<"   "<<"Y= "<<c1.gety(); 
}
void graph::move_car(int Action)
{
	switch (Action)
{		case Right:
			{
				for (int i=0;i<20;i++)
				c1.X[i]+=3;
				break; 
			}
		case Left:
			{
				for (int i=0;i<20;i++)
			c1.X[i]-=3;
				break; 
			}
		case Up:
			{	for (int i=0;i<20;i++)
			c1.Y[i]--; 
			break; 
			}
		case Dwon:
			{	for (int i=0;i<20;i++)
			c1.Y[i]++; 
			break; 
			}
}
}
bool graph::movecars()
{
	
			for (int i=0;i<20;i++)
			{	for (int k=0;k<3; k++)
					{
						c[k].Y[i]++;
						if (c[k].Y[19]==30)
							c[k].setcar(); 
						for (int j=0; j<4; j++)
						{
							for (int l=19; l>10;l--)
							{
							if (c1.X[0]==c[j].X[l]&&c1.Y[0]==c[j].Y[l])
							{system("cls");return false; }
							
							else if (c1.X[1]==c[j].X[l]&&c1.Y[1]==c[j].Y[l])
							{system("cls");return false; }

							else if (c1.X[2]==c[j].X[l]&&c1.Y[2]==c[j].Y[l])
							{system("cls");return false; }
							}
						}
					}
				
			}
			return true; 
}