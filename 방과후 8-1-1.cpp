// 방과후 8-1-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int max = 1;
	int min = 1;
	int count = 1;
	int count1 = 1;
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		cin >> *(arr + i);
		if (count == 1 && *(arr + i) % 2 == 0)
		{
			max = *(arr + i);
			count = 0;
		}
		if (count1 == 1 && *(arr + i) % 2 == 1)
		{
			min = *(arr + i);
			count1 = 0;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (*(arr + i) % 2 == 0)
		{
			if (max < *(arr + i))
			{
				max = *(arr + i);
			}
		}
		else
			if (min > *(arr + i))
			{
				min = *(arr + i);
			}
	}
	if (count == 0)
	{
		printf("%d ", max);
	}
	if (count1 == 0)
	{
		printf(" %d", min);
	}
}

