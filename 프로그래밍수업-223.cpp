// 프로그래밍수업-223.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int input, sum = 0, i = 10;
	scanf_s("%d", &input);
	while (input / (i/10) != 0)
	{
		sum = sum + (input % i);
		input = input / i;
	}
	printf("sum : %d\n", sum);
	if (sum % 7 == 4)
	{
		printf("불량");
	}
	else
	{
		printf("정상");
	}
	return 0;
}

