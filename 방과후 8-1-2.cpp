// 방과후 8-1-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int arr[10], total=0;
	for (int i = 0; i < 10; i++)
	{
		cin >> *(arr + i);
	}
	for (int i = 0; i < 10; i += 2)
	{
		total += *(arr + i);
	}
	printf("홀수 번째 합: %d", total);
	total = 0;
	for (int i = 1; i < 10; i += 2)
	{
		total += *(arr + i);
	}
	printf("짝수 번째 합: %d", total);
    return 0;
}

