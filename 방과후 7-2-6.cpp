// 방과후 7-2-6.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int input, num=1;
	char k='a';
	scanf_s("%d", &input);
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%c ", k);
			k++;
			if (k > 'z')
			{
				k = 'a';
			}
		}
		for (int j = 0; j + i < input; j++)
		{
			printf("%2d", num);
			num++;
		}
		printf("\n");
	}
    return 0;
}

