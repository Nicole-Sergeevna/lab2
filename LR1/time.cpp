#include "time.h"
#include <iostream>

using namespace std;


timer::timer(int x, int y, int z)
{
	h = x;
	m = y;
	s = z;
	cout << "������� �����������!" << endl;
}





timer::~timer()
{
	cout << "������� ����������!" << endl;
}


int timer::display()
{
	cout << h << " ��� " << m << " ����� " << s << " ����� � ��� ";
	if (m >= 1 && m < 3)
	{
		cout << "����\n";
	}
	if (m >= 3 && m < 6)
	{
		cout << "�����\n";
	}
	if (m >= 6 && m < 9)
	{
		cout << "����\n";
	}
	if (m >= 9 && m <= 12)
	{
		cout << "�����\n";
	}
	return 0;
}


void timer::show()
{
	cout << "Tip staticheskiy metod" << endl;
}


int timer::display2()
{
	cout << h << "." << m << "." << s << " � ��� ";
	if (m >= 1 && m < 3)
	{
		cout << "����\n";
	}
	if (m >= 3 && m < 6)
	{
		cout << "�����\n";
	}
	if (m >= 6 && m < 9)
	{
		cout << "����\n";
	}
	if (m >= 9 && m <= 12)
	{
		cout << "�����\n";
	}
	return 0;
}