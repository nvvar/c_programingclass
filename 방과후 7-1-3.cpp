// 방과후 7-1-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int input, sum=0, count=0;
	for (int i = 0; i < 20; i++)
	{
		scanf_s("%d", &input);
		if (input == 0)
		{
			break;
		}
		count++;
		sum += input;
	}
	printf("총합:%d, 평균:%d\n", sum, sum / count);
    return 0;
}

