// star-방과후.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int input, j;
	scanf_s("%d", &input);
	for (int i = 0; i < input * 2; i++)
	{
		for (j = 0; j + input <=i; j++)
		{
			printf(" ");
		}
		for (; j <= i; j++)
		{
			if (j == input)
			{
				break;
			}
			printf("*");
		}
		printf("\n");
	}
    return 0;
}

