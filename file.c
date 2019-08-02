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
    char choice;
    printf("enter c for file copying\nenter w for file wrting\nenter r for file reading\nenter a for adding contents to the end of the file\n");
    scanf("%c",&choice);
    char cfile1[100];
    char cfile2[100];
    char wfile[100];
    char wtext[100];
    if (choice=='c')
    {
        printf("enter name of the file to copy from:");
        scanf("%s",&cfile1);
        printf("enter name of the file to paste to:");
        scanf("%s",&cfile2);
        fcopys(cfile1,cfile2);
    }

    else if(choice=='w')
    {
        printf("enter the name of the file to be written:");
        scanf("%s",wfile);
        printf("enter the text to be written:");
        scanf("%s",wtext);
        fwrites(wfile,wtext);
    }
    
}