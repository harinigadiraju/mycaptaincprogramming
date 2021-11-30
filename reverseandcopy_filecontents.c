#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
long count_characters(FILE *);
 
void main(int argc, char * argv[])
{
    int i;
    long cnt;
    char ch, ch1;
    FILE *fp1, *fp2;
 
    if (fp1 = fopen(argv[1], "r"))    
    {
        printf("The FILE has been opened...\n");
        fp2 = fopen(argv[2], "w");
        cnt = count_characters(fp1); // to count the total number of characters inside the source file
        fseek(fp1, -1L, 2);     // makes the pointer fp1 to point at the last character of the file
        printf("Number of characters to be copied %d\n", ftell(fp1));
 
        while (cnt)
        {
            ch = fgetc(fp1);
            fputc(ch, fp2);
            fseek(fp1, -2L, 1);     // shifts the pointer to the previous character
            cnt--;
        }
        printf("\n**File copied successfully in reverse order**\n");
    }
    else
    {
        perror("Error occured\n");
    }
    fclose(fp1);
    fclose(fp2);
}











int main()
{
	FILE *fptr1, *fptr2;
	char filename[100], c;

	printf("Enter the filename to open for reading \n");
	scanf("%s", filename);

	fptr1 = fopen(filename, "r");
	if (fptr1 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}

	printf("Enter the filename to open for writing \n");
	scanf("%s", filename);

	
	fptr2 = fopen(filename, "w");
	if (fptr2 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}

	c = fgetc(fptr1);
	while (c != EOF)
	{
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}

	printf("\nContents copied to %s", filename);

	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
