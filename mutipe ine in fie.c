 #include <stdio.h>
    int main ()
    {
      FILE *fp;
      int i,n;
      char str[20];
      printf("Enter the number of lines to be written: ");
      scanf("%d",&n);
      fp = fopen ("abcd.txt","w");
      for(i = 0; i<n+1;i++)
      {
        gets(str);
        fputs(str, fp);
        fputs("\n", fp);
      }

      fclose (fp);
      return 0;
    }
