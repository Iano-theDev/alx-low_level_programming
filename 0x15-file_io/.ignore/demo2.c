#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	char name[20];


	fp = fopen("student.txt", "w");

	printf("Enter your name!");
	gets(name);


//	fp = fopen("student.txt", "w");

/*
	fputc('A', fp);
	fputc('\n', fp);
	fputc('B', fp);
	fputc('\n', fp);
	fputc('C', fp);
	fputc('\n', fp);

*/	fprintf(fp, "%s", name);


	printf("Data has been saved successfully into student.txt");
	fclose(fp);
	return (0);

}
