#pragma once
class timer
{
	int h;
	int m;
	int s;
public:
	//timer();
	timer(int x = 0, int y = 0, int z = 0);
	int display();
	int display2();
	~timer();
	//const int t = 12;
	static const int d = 50;
	static void show();
};

