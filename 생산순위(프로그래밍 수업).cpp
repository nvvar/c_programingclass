// 생산순위(프로그래밍 수업).cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
int finput(int*);
int process(int*, int*, int);

int main()
{
	int input;
	int *arr = (int*)malloc((sizeof(int)*finput(&input)));
	int *arr1 = (int*)malloc((sizeof(int)*input));
	process(arr, arr1, input);
    return 0;
}

int finput(int* input)
{
	cin >> *input;
	return *input;
}

int process(int* arr, int* arr1, int input)
{
	for (int i = 0; i < input; i++)
	{
		*(arr1 + i) = 1;
	}
	for (int i = 0; i < input; i++)
	{
		cin >> *(arr + i);
	}
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
		{
			if (i == j)
			{
				continue;
			}
			if (*(arr + i) < *(arr + j))
			{
				*(arr1 + i) = *(arr1 + i) + 1;
			}
		}
	}
	for (int i = 0; i < input; i++)
	{
		printf("%d ", *(arr1 + i));
	}
	return 0;
}