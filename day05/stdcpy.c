#include <stdio.h>
#define BUF_SIZE 3

int amin(int argc, char *argv[])
{
    FILE * fp1;
    FILE * fp2;
    char buf[BUF_SIZE];

    fp1=fopen("news.txt","r");
    fp2=fopen("cpy.txt", "W");

    while(fgets(buf, BUF_SIZE, fp1)!=NULL)
        fputs(buf, fp2);

    fclose(fp1);
    fclose(fp2);
    return 0;
}