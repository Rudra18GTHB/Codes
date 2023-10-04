#include <stdio.h>

int main(){
    float P, R, T, SI;
    printf("Enter the principle amount: ");
    scanf("%f",&P);
    printf("Enter rate of interest amount: ");
    scanf("%f",&R);
    printf("Enter time period: ");
    scanf("%f",&T);
    SI=P*R*T/100;
    printf("Simple Interest: %f",SI);
    return 0;
}

