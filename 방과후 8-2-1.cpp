// 방과후 8-2-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int temp;
	for (int i = 0; i < 9; i++)
	{
		temp = *(arr + i);
		*(arr + i) = *(arr + (i + 1));
		*(arr + (i + 1)) = temp;

	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(arr + i));
	}
    return 0;
}

