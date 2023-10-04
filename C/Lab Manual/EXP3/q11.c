#include <stdio.h>

int main()
{
    int limit,count=0,count2=0,org,num,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for (int i=1;limit!=count2;i++)
    {
        org=i;
        while (org!=0){
            count+=1;
            org/=10;
        }
        org=i;
        while (org!=0){
            num=org%10;
            sum+=power(num,count);
            org/=10;
        }
        if (sum==i){
            count2+=1;
            printf("%d ",i);
        }
        count=0;
        sum=0;
    }  
    return 0;
}