// 방과후 8-3-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int arr[5] = { 1,1,0,0,1 };
	int total = 0;
	int vks = 1;
	for (int i = 4; i >= 0; i--)
	{
		if (*(arr + i) == 1)
		{
			total += vks;
		}
		vks *= 2;
		printf("%d\n", total);
	}
	printf("\n%d", vks);
    return 0;
}

