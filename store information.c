#include<stdio.h>
#include<string.h>

void main()
{

    FILE *ptr;
    int i;
    char name[20];
    int age;
    int salary;
    char str;

    /* open for writing */
    ptr = fopen("emp.txt", "w");

    if (ptr == NULL)
    {
        printf("File does not exist.\n");
        return;
    }
   // for loop to store 10 item
    for(i=0;i<2;i++)
    {
    printf("Enter the name:\n");
    scanf("%s", name);
    fprintf(ptr, "Name  = %s\n", name);

    printf("Enter the age:\n");
    scanf("%d", &age);
    fprintf(ptr, "Age  = %d\n", age);

    printf("Enter the salary:\n");
    scanf("%d", &salary);
    fprintf(ptr, "Salary  = %d\n", salary);
    }

    fclose(ptr);
        // opening file to display content
    ptr = fopen("emp.txt", "r");
    str = fgetc(ptr);
	while (str != EOF)
		{
			printf ("%c", str);
			str = fgetc(ptr);
		}
		printf("\n\n");
    fclose(ptr);
}
