#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	for (int i = 0; i < 4; i++)
	{
		switch (i)
		{
		case 0:cout << 0;
		case 1:cout << 1; continue;
		case 2:cout << 2; break;
		default:cout << "D"; break;
		}
		cout << '.';
	}
}