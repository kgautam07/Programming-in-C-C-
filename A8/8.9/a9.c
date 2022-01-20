#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100
#define BUFFER_SIZE 64
int main()
{
	char buffer[BUFFER_SIZE];

	int n;
	scanf(" %d", &n);

	// Create an array of pointers to file names
	char **file;
    file = (char**)malloc(sizeof(char*) * n);
	if (file == NULL){
		exit(1);
	}
	for (int i = 0; i < n; i++)
	{
		file[i] = (char*)malloc(sizeof(char) * MAX_LENGTH);
		if (file[i] == NULL)
			exit(1);
	}

	// Open file for the output
	FILE* wptr;
	wptr = fopen("output.txt", "w");
	if (wptr == NULL)
	{
		printf("Error opening the file");
		exit(1);
	}

	// Read file names
	for (i = 0; i < n; i++)
	{
		scanf(" %s", file[i]);
	}

	// Open one file at a time and concatenate their contents in the 
	// output file
	FILE* fptr;
	for (i = 0; i < n; i++)
	{
		fptr = fopen(file[i], "r");
		while (!feof(fptr))
		{
			fread(buffer, sizeof(char), 64, fptr);
			fwrite(buffer, sizeof(char), 64, wptr);
		}
		fprintf(wptr, "\n");

		fclose(fptr);
	}
	
	fclose(wptr);

	// Free memory
	for (i = 0; i < n; i++)
	{
		free(file[i]);
	}
	free(file);

}