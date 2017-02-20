#include <iostream>

using namespace std;

int n_Time_func_repeat(int n, int m)
{
	if (m == n)
	{
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		return n_Time_func_repeat(n, m + 1);
	}
}

//int main()
//{
//
//
//	system("pause");
//	return 0;
//}