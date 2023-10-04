#include <stdio.h>
int prime_printer(int start,int end)
{  
    int prime;
    printf("Prime Numbers from %d To %d are\n",start,end);  
    for(int num=start;num<=end;num++)  {
        prime=1;
        for(int count=2;count*count<=num;count++){  
            if(num%count==0){
                prime=0;
                break;  
            }
        }
        if (prime){
            printf("%d ",num);
        }
    }
}

int main()
{
    int s,e;
    printf("Enter the range to print prime number:\n");
    printf("Start: ");
    scanf("%d",&s);
    printf("End: ");
    scanf("%d",&e);
    prime_printer(s,e);
    return 0;
}
