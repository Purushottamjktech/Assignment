#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    FILE *fptr;
    int s,i;
    int charecter =0;
    int words=0;

    // opening file for write
    fptr = fopen("cwac.txt","w");
    printf("enter contents of file \n");
    gets(str);
    fprintf(fptr,"%s",str);
    fclose(fptr);

    str[i] = tolower(str[i]);
    // for loops to count
    for(int i =0; str[i] != '\0';i++)
    {
        // checking condition
    if ((str[i] >= 'a' && str[i] <= 'z')) {
          //  increasing counter
      charecter++;
    }
    // checking condition
    else if(str[i] == ' ' && str[i+1] != ' ' )
    {
        // increasing counter
        words++;
    }
    }
    printf("\n number of charecter present in file is:   %d\n ",charecter);
    printf("number of words present in file is:    %d\n",words);
}
