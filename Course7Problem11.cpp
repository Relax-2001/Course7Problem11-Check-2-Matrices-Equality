
#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void FillMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d\t", 2, Arr[i][j]);
		}
		cout << "\n";
	}
}

short SumOfMatrixElements(short Arr[3][3], short Rows, short Cols)
{
	short Sum = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum += Arr[i][j];
		}
	}
	return Sum;
}

bool CheckMatricesEquality(short Arr1[3][3], short Arr2[3][3], short Rows, short Cols)
{
	return (SumOfMatrixElements(Arr1, Rows, Cols) == SumOfMatrixElements(Arr2, Rows, Cols));
}

int main()
{

	srand((unsigned)time(NULL));

	short Arr1[3][3] , Arr2[3][3];

	FillMatrix(Arr1, 3, 3);
	cout << "\nMatris :\n";
	PrintMatrix(Arr1, 3, 3);

	FillMatrix(Arr2, 3, 3);
	cout << "\nMatris :\n";
	PrintMatrix(Arr2, 3, 3);

	if (CheckMatricesEquality(Arr1, Arr2, 3, 3))
	{
		cout << "\nYes, matrices are equal.\n";
	}
	else
	{
		cout << "\nNo, matrices are not equal.\n";
	}


	return 0;
}
