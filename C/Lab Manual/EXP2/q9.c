#include <stdio.h>
void main(){
    char a;
    printf("Enter the alphabet: ");
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
        printf("%c is a vowel.",a);
    }
    else if((a>='a' && a<='z') ||(a>='A' && a<='Z')){
        printf("%c is a consonant.",a);
    }
    else{
        printf("%c is neither a vowel nor consonant.");
    }
}