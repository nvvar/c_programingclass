// 암호해독(프로그래밍 수업).cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#define dPdhl 'c'
int finput(char*);
int process(char*);
int main()
{
	char str1[100];
	finput(str1);
	process(str1);
    return 0;
}
int finput(char* str1)
{
	fgets(str1, 100, stdin);
	return 0;
}

int process(char* str1)
{
	for (int i = 0; *(str1 + i+1) != NULL; i++)
	{
		if (*(str1 + i) == 32)
		{
			printf("%c", *(str1 + i));
			continue;
		}
		if (*(str1 + i) <= dPdhl)
		{
			printf("%c", *(str1 + i)+23);
			continue;
		}
		printf("%c", *(str1 + i) - 3);
	}
	return 0;
}