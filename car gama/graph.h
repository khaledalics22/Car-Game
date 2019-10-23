#include "car.h"
#pragma once

class graph
{
	 static int w,h;
	 car c[4]; car c1;
public: 
	graph(int x,int y); 
	static int getw(); 
	static int geth();
	void move_car(int Action);
	bool movecars();
	void draw_graph(); 
};