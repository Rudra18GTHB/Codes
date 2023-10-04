#include <stdio.h>
int main()
{
    FILE *fptr;
    char ch;
    int coc=0,col=1,cow=2;
    fptr=fopen("q1.txt","r");
    if (fptr==NULL){
        printf("Error");
        return 1;
    }
    while((ch=fgetc(fptr))!=EOF){
        coc++;
        if (ch=='\n'){
            col++;
        }
        if (ch==' '){
            cow++;
        }
    }
    fclose(fptr);
    printf("\nNumber of character: %d",coc-col-cow+2);
    printf("\nNumber of lines: %d",col);
    printf("\nNumber of words: %d",cow);
    return 0;
}