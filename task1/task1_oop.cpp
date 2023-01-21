#include <iostream>
#include <string>
#include <limits>
#include <math.h>
using namespace std;

void arithmetic_mean(int** A,int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum = sum + A[i][j];
		}
	}
	cout << " arithmetic mean = "<<sum/(n*n) << endl;
}

void minimum(int** A, int n)
{
	int min = A[0][0];
	for (int i = 0; i < n; i+=(n-1))
	{
		for (int j = 0; j < n; j++)
		{
			if (((min % 2) != 1) && ((A[i][j] % 2) == 1))
			{
				min = A[i][j];
			}
			else if (((min % 2) != 1) && ((A[i][j] % 2) == 1))
			{
				if (min > A[i][j])
				{
					min = A[i][j];
				}
			}
		}
	}
	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < n; j+= (n - 1))
		{
			if (((min % 2) != 1) && ((A[i][j] % 2) == 1))
			{
				min = A[i][j];
			}
			else if (((min % 2) != 1) && ((A[i][j] % 2) == 1))
			{
				if (min > A[i][j])
				{
					min = A[i][j];
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		int m = (n-i)-1;
		if (((A[i][m] % 2) == 1) && ((min % 2) == 1))
		{
			if (min > A[i][m])
			{
				min = A[i][m];
			}
		}
		else if (((min % 2) != 1) && ((A[i][m] % 2) == 1))
		{
			if (min > A[i][m])
			{
				min = A[i][m];
			}
		}
	}
	if ((min % 2) == 1)
	{
		cout << "minimum = " << min << endl;
	}
	else
	{
		cout << "even numbers only "<< endl;
	}
}
int swap(int a)
{
	int fst = a / 100;
	int sec = (a % 100) / 10;
	int th = a % 10;

	int b = th;
	if (fst != 0)
	{
		b = (th * 100) + (sec * 10) + fst;
		return b;
	}
	else if ((fst == 0)&&(sec !=0))
	{
		b = (th * 10) + sec;
		return b;
	}
	else
	{
		return b;
	}	
}
void Csquared(int** A, int** B,int n)
{
	int** С = new int* [n];
	for (int i = 0; i < n; i++)
	{
		С[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((B[i][j] - A[i][j]) < 0) 
			{
				С[i][j] = 0;
			}
			else
			{
				С[i][j] = sqrt(B[i][j] - A[i][j]);
			}
		}
	}
	cout << "Matrica C:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << С[i][j] << " ";
		}
		cout << endl;
	}
}


int main()
{
	int n = 2;
	int ** A = new int* [n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
	}


	cout << "Matrica A:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}


	arithmetic_mean(A, n);
	minimum(A, n);
	
	
	int** B = new int* [n];
	for (int i = 0; i < n; i++)
	{
		B[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j]= swap(A[i][j]);
		}
	}
	cout << "Matrica B:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	Csquared(A, B, n);


	for (int i = 0; i < n; i++)
	{
		delete[] A[i];
	}
	delete A;

	for (int i = 0; i < n; i++)
	{
		delete[] B[i];
	}
	delete B;
}