#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//file handling
//1. stream-oriented data files - data is stored in the same manner as it appears on the screen.
//2. system-oriented data files - data firls are more closely associated with the OS.

//C file operations
//Creation of a new file, Opening, reading, wridting data into a file & closing the file

//steps for processing a file
//1. Declare a file pointer variable.
//2. OPen a file using fopen()
//3. Procass the file using the suitable function.
//4. close the file.

//fopen, fclose, getc, putc, getw, putw, fprintf, fscanf, fgets, fputs, feof.

int main()
{
	FILE *fp;
	fp = fopen("filename.txt", "w");

	fprintf(fp, "%s", "hello User \n!");





	fclose (fp);
	return (0);
}
