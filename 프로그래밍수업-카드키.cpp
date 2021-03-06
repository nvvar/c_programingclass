#include "stdafx.h"
int finput(int*, int*, int*);
int comparison(int*, int*, int*);
int process(int, int, int);
int swap(int*, int*);

int main()
{
	int input_min, input1, input2;
	finput(&input_min, &input1, &input2);
	comparison(&input_min, &input1, &input2);
	process(input_min, input1, input2);
    return 0;
}

int finput(int* input, int* input1, int* input2)
{
	cin >> *input >> *input1 >> *input2;
	return 0;
}

int comparison(int* in1, int* in2, int* in3)
{
	if (*in1 < *in2)
	{
		if (*in1 < *in3)
		{
			return 0;
		}
		else
		{
			swap(in1, in3);
		}
	}
	else
	{
		if (*in2 < *in3)
		{
			swap(in1, in2);
		}
		else
		{
			swap(in1, in3);
		}
	}
}

int process(int input_min, int input1, int input2)
{
	int res = 1;
	for (int i = 1; i <= input_min; i++)
	{
		if (input_min % i == 0)
		{
			if (input1 % i == 0)
			{
				if (input2 % i == 0)
				{
					res = i;
					continue;
				}
			}
		}
	}
	printf("%d\n", res);
	return 0;
}

int swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}