#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *a;
	char q[80];
	int i;
	a =fopen("C://Users/user/Desktop/C語言/12 27/107360242_耀展/p17/output.txt","r") ;
	if (a == NULL)
	{
		printf("檔案開啟失敗\n");
	}
	else
	{
			i= fread(q, sizeof(char), 79, a);
			q[i] = '\0';
		    printf("%s\n", q);
	}
	fclose(a);
	system("pause");
}