// Pos Neg Null DynArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;

void inputArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20-5;
	}
}
void printArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}
void sortPosNegNull(int* A, int n, int*& B, int& m, int*& C, int& x, int*& D, int& y)
{
	int mm = 0;
	int xx = 0;
	int yy = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] > 0)
		{
			B[mm] = A[i];
			mm++;
		}
		else if (A[i] == 0)
		{
			C[xx] = A[i];
			xx++;
		}
		else
		{
			D[yy] = A[i];
			yy++;
		}
	}
	m = mm;
	x = xx;
	y = yy;
}

int main()
{
	srand(time(NULL));
	int n = 1;
	cout << "Enter m" << endl;
	cin >> n;
	int m = n;
	int x = n;
	int y = n;
	int* A = new int[n];
	int* B = new int[m];
	int* C = new int[x];
	int* D = new int[y];

	inputArr(A, n);
	printArr(A, n);
	cout << endl;
	sortPosNegNull(A, n, B, m, C, x, D, y);
	cout << endl;
	cout<<"Positive array   ";
	printArr(B, m);
	cout << endl;
	cout << "Zero array   ";
	printArr(C, x);
	cout << endl;
	cout << "Negative array   ";
	printArr(D, y);

	delete[]A;
	delete[]B;
	delete[]C;
	delete[]D;

}
