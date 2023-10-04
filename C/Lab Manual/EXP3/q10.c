#include<stdio.h>  
int main()  
{  
    int num,count,limit,prime;  
    printf("Enter the limit\n");  
    scanf("%d", &limit);  
    printf("Prime Numbers from 2 To %d are\n", limit);  
    for(num=2;num<=limit;num++)  {
        prime=0;
        for(count=2;count*count<=num;++count){  
            if(num%count==0){
                prime=1;
                break;  
            }
        }
        if (prime==0){
            printf("%d ",num);
        }
    }   
    return 0;  
}