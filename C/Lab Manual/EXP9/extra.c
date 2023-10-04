#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file1.txt","w");
    fputs("My name is Raju Rastogi",fp);
    fclose(fp);
    return 0;
}