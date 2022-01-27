#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Empoyee {
   int id;
   int age;
   char name[20];
   char department[20];

};
int main () {
   FILE *of;

   // opening file for write mode
   of= fopen ("pheonix.txt", "w");
   if (of == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   struct Empoyee inp1 = {1,23, "purushottam","IT"};

   fwrite (&inp1, sizeof(struct Empoyee ), 1, of);

    // checking condition
   if(fwrite != 0)
      printf("Contents to file written successfully !\n");
   else
      printf("Error writing file !\n");
   fclose (of);
   //declaring pointer.
   FILE *inf;
   struct Empoyee inp;
   inf = fopen ("pheonix.txt", "r");
   if (inf == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   while(fread(&inp, sizeof(struct Empoyee), 1, inf))
      printf ("roll_no = %d name = %s age = %d  department = %d \n" , inp.id, inp.name,inp.age,inp.department);
   fclose (inf);
}
