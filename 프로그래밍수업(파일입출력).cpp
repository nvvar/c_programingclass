#include "stdafx.h"
int main()
{
	char a;

	FILE *document = fopen("document.txt", "r");
	FILE *result = fopen("result.txt", "w");
	while (fscanf(document, "%c", &a) != EOF)
	{
		if (a >= 97 && a < 123)
		{
			fprintf(result, "%c", a - 32);
		}
		else if (a >= 65 && a < 91)
		{
			fprintf(result, "%c", a + 32);
		}
		else
		{
			fprintf(result, "%c", a);
		}
	}
	fclose(document);
	fclose(result);
	return 0;
}

