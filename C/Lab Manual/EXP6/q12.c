#include <stdio.h>
int main()
{
    char word[]="Rudra",count=0;
    int size=sizeof(word)/sizeof(word[0])-1;
    for(int i=0;i<size;i++){
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' ||
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' ||
            word[i] == 'U') {
            count++;
        }
    }
    printf("Number of vowels is string: %d",count);
    return 0;
}
