// 방과후 7-1-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int input;
	cin >> input;
	for (int i = 1; i*input < 100; i++)
	{
		printf("%d ", input*i);
		if ((input*i) % 10 == 0)
		{
			break;
		}
	}
    return 0;
}

