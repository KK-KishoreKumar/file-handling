#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *ptrf;
    char fake[]="test failed?";
    ptrf=fopen("test.txt","w");
    fprintf(ptrf,"%s",fake);
    fclose(ptrf);
    ptrf=fopen("test.txt","a");
    fprintf(ptrf," or is it");
    fclose(ptrf);
    ptrf=fopen("test.txt","r");
    char c[100];
    int i;
    while((c[i]=fgetc(ptrf))!=EOF)
    {
        ++i;
    }
    fclose(ptrf);
    printf("%s",c);
}