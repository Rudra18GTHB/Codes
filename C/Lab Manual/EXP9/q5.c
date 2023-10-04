#include <stdio.h>
int main()
{
    FILE *fptr,*f1ptr,*f2ptr;
    char ch;
    fptr=fopen("q4.txt","r");
    f1ptr=fopen("q1.txt","r");
    f2ptr=fopen("q5.txt","a");
    if (fptr==NULL){
        printf("Error");
        return 1;
    }
    if (f1ptr==NULL){
        printf("Error");
        return 1;
    }
    while((ch=fgetc(fptr))!=EOF){
        fputc(ch,f2ptr);
    }
    while((ch=fgetc(f1ptr))!=EOF){
        fputc(ch,f2ptr);
    }
    fclose(fptr);
    fclose(f1ptr);
    fclose(f2ptr);
    return 0;
}