#include "stdafx.h"
#define qo 100

struct student {
	int num, ma, wjd;
	int sum;
	double avg;
};
int main()
{
	int a;
	student stu[qo];
	cin >> a;
	if (a > qo)
	{
		return 0;
	}
	for (int i = 0; i < a; i++)
	{
		cin >> (stu + i)->num >> (stu + i)-> ma >> (stu + i)->wjd;
	}
	for (int i = 0; i < a; i++)
	{
		(stu + i)->sum = (stu + i)->ma + (stu + i)->wjd;
		(stu + i)->avg = (double)(stu + i)->sum/2;
		printf("%d %d %d %d %.1lf\n", (stu + i)->num,(stu + i)->ma, (stu + i)->wjd, (stu + i)->sum, (stu + i)->avg);
	}
	return 0;
}

