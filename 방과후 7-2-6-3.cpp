// 방과후 7-2-6-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int input, k=1;
	scanf_s("%d", &input);
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
		{
			printf("%d", k);
			k = (k + 2) % 10;
		}
		printf("\n");
	}
    return 0;
}

