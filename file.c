#include <stdio.h>
#include <stdlib.h>

void fcopy(char file1[],char file2[])
{
   FILE *ptrf;
   ptrf=fopen(file1,"r");
   char c[100];
   int i;
   while((c[i]=fgetc(ptrf))!=EOF)
   {
       ++i;
   }
   fclose(ptrf);
   ptrf=fopen(file2,"w");
   fprintf(ptrf,"%s",c);
   fclose(ptrf);
}
int main()
{
    char filename1[100];
    char filename2[100];
    printf("file to copy from:\n");
    scanf("%s",filename1);
    printf("file to paste to:\n");
    scanf("%s",filename2);
    fcopy(filename1,filename2);
}