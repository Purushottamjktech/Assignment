#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    char str[50];
    char stri[50];

        // opening two file for write purpose.
    fp1 = fopen("file1.txt","w");
    fp2 = fopen("file2.txt","w");


    printf("enter content of fie1\n");
    gets(str);
    printf("enter content of fie2\n ");
    gets(stri);

    fprintf(fp1,"%s ",str);
    fprintf(fp2,"%s",stri);

    // closing file

    fclose(fp1);
    fclose(fp2);

    // opening file for read purpose

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");


   fp3 = fopen("file3.txt", "w");
   char c;
    // checking condition

   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Could not open files");
         exit(0);
   }

    // copying contents
   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);


   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);

   printf("Merged file1.txt and file2.txt into file3.txt");

   fclose(fp1);
   fclose(fp2);
   fclose(fp3);

}
