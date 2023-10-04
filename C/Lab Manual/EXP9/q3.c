#include <stdio.h>
int main()
{
    FILE *fptr;
    char ch;
    fptr=fopen("q1.txt","r");
    if (fptr==NULL){
        printf("Error");
        return 1;
    }
    while((ch=fgetc(fptr))!=EOF){
        printf("%c",ch);
    }
    fclose(fptr);
    return 0;
}