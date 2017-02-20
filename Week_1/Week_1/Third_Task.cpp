#include <iostream>

using namespace std;

int const MAX_SIZE = 10;
//int const New_Msize = 3;

void biggest_sum_Of_el(int matrix[MAX_SIZE][MAX_SIZE], int sizeR, int sizeC, int newMatrix[MAX_SIZE][MAX_SIZE], int stopperR, int stopperC, int i, int j)
																												// starts from 3; i, j:start from 0
{
	if (stopperR == sizeR + 1 && stopperC == sizeC + 1)
	{
		for (i = 0; i < stopperR; i++)
		{
			for (j = 0; j < stopperC; j++)
			{
				cout << newMatrix[i][j];
			}
			cout << endl;
		}
	}

	int sum = 0;
	int tempSum = 0;

	for (i = 0; i < sizeR; i++)
	{
		for (j = 0; j < sizeC; j++)
		{
			sum += matrix[i][j];

			if (i == stopperR && j == stopperC)
			{
				break;
			}

		}
	}

	if (tempSum <= sum)
	{
		tempSum = sum;

		for (i = 0; i < stopperR; i++)
		{
			for (j = 0; j < stopperC; j++)
			{
				newMatrix[i][j] = matrix[i][j];
			}
		}
	}

	if (stopperR != sizeR && stopperC == 3)
	{
		biggest_sum_Of_el(matrix, sizeR, sizeC, newMatrix, stopperR + 1, stopperC, i + 1, j);
	}
	else if (stopperR == sizeR && stopperC != sizeC)
	{
		biggest_sum_Of_el(matrix, sizeR, sizeC, newMatrix, stopperR, stopperC + 1, i, j + 1);
	}
	
}

int main()
{


	system("pause");
	return 0;
}