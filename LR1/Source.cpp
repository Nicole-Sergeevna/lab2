#include <iostream>  //static method and peremen;  get/set pole
#include <ctime>
#include "time.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int x, y, z, i;

	timer a;
	a.show();

	cout << "������� ���, ����� � ����:\n";
	do{
		cin >> x;
	} while (x < 0 || x>3000);
	do{
		cin >> y;
	} while (y < 0 || y>12);
	do{
		cin >> z;
	} while (y < 0 || y>31);
	timer ob1(x, y, z);
	
	cout << "��� ������� ����? 1 � ����������, 2 � ������.\n";
	cin >> i;
	
	switch (i)
	{
	case 1: {ob1.display();
		     break; }
	case 2: {ob1.display2();
			  }
	}
	return 0;

	system("pause");
}