// 방과후 7-1-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int total=0, input, count=0;
	cin >> input;
	for (int i = 1; total < input; i++)
	{
		if (i % 2 == 1)
		{
			total += i;
			count++;
		}
	}
	printf("개수 : %d, 총합 : %d\n", count, total);
    return 0;
}

