// 방과후 7-2-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char k = 65;
	int input;
	scanf_s("%d", &input);
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j + i < input; j++)
		{
			printf("%c", k);
			k++;
		}
		printf("\n");
	}
    return 0;
}

