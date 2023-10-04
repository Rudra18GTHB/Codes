#include <stdio.h>
int main()
{
    char name[]="Rudra";
    int length=0;
    while (name[length]!='\0'){
        length++;
    }
    printf("Length is: %d",length);
    return 0;
}