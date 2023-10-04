#include <stdio.h>

int main()
{
    int Number,act,ans=0;
    printf("Enter the number: ");
    scanf("%d", &Number);
    act=Number;
    for (int i=1;i<Number;i++){
        if(Number%i==0){
            ans+=i;
        }
    }
    if (ans==act){
        printf("Its is a perfect number");
    }
    else{
        printf("It is not a perfect number");
    }
    return 0;
}