// 방과후_diamond.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int input;
	scanf_s("%d", &input);
	for (int i = 0; i < input*2; i++)
	{
		for (int j = 0; i + j < input - 1; j++)
		{
			if (i >= input)
			{
				printf("*");
				continue;
			}
			printf(" ");
		}
		for (int j = 0; j < i * 2 - 1; j++)
		{
			if (i >= input)
			{
				printf(" ");
				continue;
			}
			printf("*");
		}
		printf("\n");
	}
    return 0;
}

