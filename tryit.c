#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *ptrf;
    char fake[]="test failed?";
    ptrf=fopen("test.txt","w");
    fprintf(ptrf,"%s",fake);
    fclose(ptrf);
}