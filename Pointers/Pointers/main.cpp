#include<iostream>
using namespace std;

//#define POITERS_BASICS
//#define POINTER_AND_ARRAYS

void main()
{
	setlocale(LC_ALL, "");

#ifdef POITERS_BASICS
	int a = 2;
	int* pa = &a;	//pa - pointer to 'a'
					//ptr - pointer
	cout << a << endl;	//����� �������� ���������� 'a' �� �����
	cout << &a << endl;	//��������� ������ ���������� 'a' ����� ��� ������
	cout << pa << endl;	//����� ������ ���������� 'a', ����������� � ��������� 'pa'
	cout << *pa << endl;//������������� ��������� 'pa', � ��������� �������� �� ������ � ���� ���������

	int* pb;
	int b = 3;
	pb = &b;
	// (int) (int*)

		//int  - int
		//int* - ��������� �� int
		//double - double
		//double* = ��������� �� double  
#endif // POITERS_BASICS

#ifdef POINTER_AND_ARRAYS
	const int n = 5;
	short arr[n] = { 3,5,8,13,21 };
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
#endif // POINTER_AND_ARRAYS


}

/*
--------------------------------------------
& - Address-of operator (�������� ������ ������).
	��� ������� ��������, ������� ���������� ����� ������ ��������.
* - Dereference operator (�������� �������������).
	��� ������� ��������, ������� ���������� �������� �� ������.
--------------------------------------------
*/

/*
--------------------------------------------
				Pointers arithmetics:
+, -, ++, --;
char	- 1 Byte;
short	- 2 Bytes;
int		- 4 Bytes;
double	- 8 Bytes;
--------------------------------------------
*/