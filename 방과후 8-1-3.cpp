// 방과후 8-1-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	float avg[6];
	float a, b;
	for (int i = 0; i < 6; i++)
	{
		cin >> *(avg + i);
		printf("%d\n", *(avg + i));
	}
	cin >> a >> b;
	a--; b--;
	printf("%d %d\n", a, b);
	printf("%d %d", *(avg + a), *(avg +b));
    return 0;
}

