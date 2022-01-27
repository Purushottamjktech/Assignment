#include<stdio.h>
#include<string.h>
void main()
{
	int d;
	char str[20];
	FILE *ptr;
    // opening file for write purpose.
	ptr = fopen("remove.txt","w");

    printf("enter contents\n");
    gets(str);

	fprintf(ptr,"%s ",str);

	fclose(ptr);

	printf(" Input the name of file to delete : ");
	scanf("%s",str);

	// deleting file
	d=remove(str);
	if(d==0)
	{
		printf(" The file %s is deleted successfully..!!\n\n",str);
	}
	else
	{
		printf(" Unable to delete file %s\n\n",str);
	}
}
