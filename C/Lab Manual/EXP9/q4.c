#include <stdio.h>
int main()
{
    FILE *fptr;
    FILE *f2ptr;
    char ch;
    f2ptr=fopen("q4.txt","w");
    fptr=fopen("q1.txt","r");
    if (fptr==NULL){
        printf("Error");
        return 1;
    }
    while((ch=fgetc(fptr))!=EOF){
        fputc(ch,f2ptr);
    }
    fclose(fptr);
    fclose(f2ptr);
    return 0;
}