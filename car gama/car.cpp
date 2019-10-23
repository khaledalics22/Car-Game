#include"car.h"

car::car(int y,int x)
{

	X[0]=(x);
	Y[0]=(y);
	int j=1; 
	for (int i=1; i<3; i++)
	{
		X[i]=x+j;
		Y[i]=y; 
		j++ ;
	}
	j=-2;
	for (int i=3; i<10; i++)
	{
		X[i]=x+j;
		Y[i]=y+1;
		j++; 
	}
	j=-2; 
	for (int i=10; i<17; i++)
	{
		X[i]=x+j;
		Y[i]=y+2;
		j++;
	}
	j=0; 
	for (int i=17; i<20; i++)
	{
		X[i]=x+j;
		Y[i]=y+3;
		j++; 
	}
}
void car::setcar()
{

	Y[0]=rand()%5;
	X[0]=(rand()%49)+1;
		int y=Y[0] ;
	int x=X[0] ; 
	int j=1; 
	for (int i=1; i<3; i++)
	{
		X[i]=x+j;
		Y[i]=y; 
		j++ ;
	}
	j=-2;
	for (int i=3; i<10; i++)
	{
		X[i]=x+j;
		Y[i]=y+1;
		j++; 
	}
	j=-2; 
	for (int i=10; i<17; i++)
	{
		X[i]=x+j;
		Y[i]=y+2;
		j++;
	}
	j=0; 
	for (int i=17; i<20; i++)
	{
		X[i]=x+j;
		Y[i]=y+3;
		j++; 
	}
}
int car::getx(){return X[0]  ; }
int car::gety(){return Y[0] ; }