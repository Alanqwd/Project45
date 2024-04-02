#include <iostream>
int max(int arr[], int size) 
{
	int maxVal = arr[0];
	for (int i = 1; i < size; i++) 
	{
		if (arr[i] > maxVal) 
		{
			maxVal = arr[i];
		}
	}
	return maxVal;
}

int max(int arr[][3], int rows, int cols) 
{
	int maxVal = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) 
		{
			if (arr[i][j] > maxVal) 
			{
				maxVal = arr[i][j];
			}
		}
	}
	return maxVal;
}


int max(int arr[][3][3], int dim1, int dim2, int dim3) 
{
	int maxVal = arr[0][0][0];
	for (int i = 0; i < dim1; i++) 
	{
		for (int j = 0; j < dim2; j++) 
		{
			for (int k = 0; k < dim3; k++) 
			{
				if (arr[i][j][k] > maxVal) 
				{
					maxVal = arr[i][j][k];
				}
			}
		}
	}
	return maxVal;
}
int max(int a, int b) 
{
	return (a > b) ? a : b;
}

int max(int a, int b, int c) 
{
	return max(max(a, b), c);
}

int main()
{
	setlocale(LC_ALL, "ru");
	int num1 = 10;
	int num2 = 20;
	int num3 = 15;
	int arr1[] = { 5, 2, 9, 1, 7 };
	int arr2[][3] = {{ 1, 4, 7},{ 3, 6, 9 }};
	int arr3[][3][3] = { {{2, 5, 8}, {3, 6, 9}, {1, 4, 10}},{{4, 7, 3}, {9, 2, 5}, {8, 1, 6}} };
	std::cout << "Макс значение в одномерном массиве: " << max(arr1, 5) << std::endl;
	std::cout << "Макс значение в двухмерном массиве: " << max(arr2, 2, 3) << std::endl;
	std::cout << "Макс значение в трехмерном массиве: " << max(arr3, 2, 3, 3) << std::endl;
	std::cout << "Макс в 2 целых: " << max(num1, num2) << std::endl;
	std::cout << "Макс в 3 целых: " << max(num1, num2, num3) << std::endl;



	return 0;
}