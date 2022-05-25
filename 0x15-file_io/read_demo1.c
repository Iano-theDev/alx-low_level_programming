#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	FILE *fp;
	char ch;
	int i;

	fp = fopen("demo1.txt","r");

	ch = fgetc(fp);
	while (ch != EOF)
	{
		printf("%c", ch);
		ch = fgetc(fp);
	}
/*
	for (i=0; i<12; i++)
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}

*/
	fclose(fp);
	return (0);
}
