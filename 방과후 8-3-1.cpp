// 방과후 8-3-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int input, j=0, count=1, te;
	cin >> input;
	int input_ = input;
	while (input > 8)
	{
		input = input/8;
		count++;
	}
	int* arr = (int*)malloc(sizeof(int)*count);
	te = count;
	for (int i=1; j<count; i*=8)
	{
		*(arr + j) = (input_ /i)% 8;
		j++;
	}
	for (int i = te-1; i >=0; i--)
	{
		printf("%d ", *(arr + i));
	}

    return 0;
}

