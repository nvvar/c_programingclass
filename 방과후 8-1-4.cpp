// 방과후 8-1-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int y;
	int m[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int a;
	do {
		cin >> y >> a;
		printf("year:%d\nday:%d\n", y, *(m + (a - 1)));
	} while (a != 0);
    return 0;
}

