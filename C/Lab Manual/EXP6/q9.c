#include <stdio.h>
int main()
{
    char name[]="Rudra",*ptr;
    ptr=name;
    printf("Reversed string: ");
    for(int i=sizeof(name)-1;i>=0;i--){
        printf("%c",*(ptr+i));
    }
    return 0;
}