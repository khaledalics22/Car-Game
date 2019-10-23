#include <iostream>
#pragma once
#include <ctime>
using namespace std; 
class car 
{
public: 
	int X[20],Y[20]; 

	car(int y=rand()%5,int x=((rand()%75)+4));
	void setcar(); 
	int getx(); 
	int gety(); 
};
	         
	   