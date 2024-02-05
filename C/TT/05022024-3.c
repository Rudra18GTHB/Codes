// WAP to accept a colour code and display the appropriate color in word.

#include <stdio.h>
void main(){
    int colour_code = 6;
    switch (colour_code)
    {
    case 1:
        printf("Blue");
        break;
    case 2:
        printf("Green");
        break;
    case 3:
        printf("Red");
        break;
    case 4:
        printf("Orange");
        break;
    case 5:
        printf("Purple");
        break;
    case 6:
        printf("Black");
        break;
    default:
        printf("Invalid Colour Code");
        break;
    }
}