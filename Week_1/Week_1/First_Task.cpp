#include <iostream>

using namespace std;

int const MAX_SIZE = 100;

void Min_max_of_array_el(int arr[MAX_SIZE], int size)
{
	int minArrEl = arr[0];
	int maxArrEl = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (minArrEl > arr[i])
		{
			minArrEl = arr[i];
		}

		if (maxArrEl < arr[i])
		{
			maxArrEl = arr[i];
		}
	}

	cout<< "The minimum element is: " << minArrEl << endl;

	/*int max = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}*/

	cout << "The maximum element is: " << maxArrEl << endl;
}

void Min_max_of_matrix_el(int matrix[MAX_SIZE][MAX_SIZE], int sizeR, int sizeC)
{
	int minMatrEl = matrix[0][0];
	int maxMatrEl = matrix[0][0];

	for (int i = 1; i < sizeR; i++)
	{
		for (int j = 1; j < sizeC; j++)
		{
			if (minMatrEl > matrix[i][j])
			{
				minMatrEl = matrix[i][j];
			}

			if (maxMatrEl < matrix[i][j])
			{
				maxMatrEl = matrix[i][j];
			}
		}
	}

	cout << "The minimum element is: " << minMatrEl << endl;
	cout << "The minimum element is: " << minMatrEl << endl;
}



//int main()
//{
//
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}