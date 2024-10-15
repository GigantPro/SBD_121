//Function templates

//template<typename T>
//template
//typename 
//T - имя шаблонного типа


#include<iostream>
//#include<time.h>	//Библиотека, написанная на языке C
#include<ctime>		//Такая же библиотека, написанная на языке C++
using namespace std;

const unsigned int ROWS = 4;
const unsigned int COLS = 5;

void FillRand(int arr[], const unsigned int n, int minRand = 0, int maxRand = 100);	//Заполняет массив случайными числами
void FillRand(double arr[], const unsigned int n, int minRand = 0, int maxRand = 100);	//Заполняет массив случайными числами

void Print(int arr[], const unsigned int n);
void Print(double arr[], const unsigned int n);
void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

void main()
{
	setlocale(LC_ALL, "");
	const unsigned int n = 5;
	int arr[n];
	//srand(5);
	int minRand, maxRand;
	//cout << "Введите минимальное случайное число: "; cin >> minRand;
	//cout << "Введите максимальное случайное число: "; cin >> maxRand;
	FillRand(arr, n, 200,300);
	Print(arr, n);
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);


	int i_arr_2[ROWS][COLS] = 
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	Print(i_arr_2, ROWS, COLS);
}

void FillRand(int arr[], const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const unsigned int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}