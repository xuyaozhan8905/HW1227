#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *a;
	FILE *b;
	char q[80];
	int c;
	a = fopen("C://Users/user/Desktop/C�y��/12 27/107360242_ģ�i/p18/welcome.txt", "r");
	b = fopen("C://Users/user/Desktop/C�y��/12 27/107360242_ģ�i/p18/output.txt", "w");

	if (a == NULL||b==NULL)
	{
		printf("�ɮ׶}�ҥ���\n");
	}
	else
	{
		while (!feof(a))
		{
			c = fscanf(a, "%s", q);
			if (c > 0)
			{
				fprintf(b, "%s\n", q);
			}
		}
		printf("�ɮ׶ǰe���\\n");
		fclose(a);
		fclose(b);
	}
	system("pause");
}