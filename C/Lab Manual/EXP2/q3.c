#include <stdio.h>
int main()
{
    float s1,s2,s3,s4,s5;
    int percentage, total;
    printf("Enter subject marks: ");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    percentage=(total/500.0)*100;

    if (percentage>=90){
        printf("A+");
    }
    else if (percentage>=80 && percentage<90){
        printf("A");
    }
    else if (percentage>=70 && percentage<=79){
        printf("B+");
    }
    else if (percentage>=60 && percentage<=69){
        printf("B");
    }
    else if (percentage>=51 && percentage<60){
        printf("C1");
    }
    else if (percentage>=41 && percentage<=50){
        printf("C2");
    }
    else if (percentage>=33 && percentage<=40){
        printf("D");
    }
    else{
        printf("Failed");
    }

    return 0;
}