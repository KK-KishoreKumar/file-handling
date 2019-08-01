#include <stdio.h>
#include <stdlib.h>

void fcopys(char file1[],char file2[])
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

void fwrites(char filename[],char text[])
{
    FILE *ptrf;
    ptrf=fopen("test.txt","w");
    fprintf(ptrf,"%s",text);
    fclose(ptrf);
}

void freads(char filename[],char storing[])
{
    FILE *ptrf;
    ptrf=fopen(filename,"r");
    int i;
    while((storing[i]=fgetc(ptrf))!=EOF)
    {
        ++i;
    }
    fclose(ptrf);
}

void fadds(char filename[],char text[])
{
    FILE *ptrf;
    ptrf=fopen(filename,"a");
    fprintf(ptrf,"%s",text);
    fclose(ptrf);
}

int main()
{
    /* char filename1[100];
    char filename2[100];
    printf("file to copy from:\n");
    scanf("%s",filename1);
    printf("file to paste to:\n");
    scanf("%s",filename2);
    fcopys(filename1,filename2);*/
    fadds("test.txt","adding toppings?");
}