#include "time.h"
#include <iostream>

using namespace std;


timer::timer(int x, int y, int z)
{
	h = x;
	m = y;
	s = z;
	cout << "Запущен конструктор!" << endl;
}





timer::~timer()
{
	cout << "Запущен деструктор!" << endl;
}


int timer::display()
{
	cout << h << " год " << m << " месяц " << s << " число – это ";
	if (m >= 1 && m < 3)
	{
		cout << "зима\n";
	}
	if (m >= 3 && m < 6)
	{
		cout << "весна\n";
	}
	if (m >= 6 && m < 9)
	{
		cout << "лето\n";
	}
	if (m >= 9 && m <= 12)
	{
		cout << "осень\n";
	}
	return 0;
}


void timer::show()
{
	cout << "Tip staticheskiy metod" << endl;
}


int timer::display2()
{
	cout << h << "." << m << "." << s << " – это ";
	if (m >= 1 && m < 3)
	{
		cout << "зима\n";
	}
	if (m >= 3 && m < 6)
	{
		cout << "весна\n";
	}
	if (m >= 6 && m < 9)
	{
		cout << "лето\n";
	}
	if (m >= 9 && m <= 12)
	{
		cout << "осень\n";
	}
	return 0;
}