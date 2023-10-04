#include <stdio.h>

int main()
{
    int arn[]={45,3,2,7,9,65,4,2,8,1},d_el,near[9],n=0;
    printf("Enter the element to be deleted: ");
    scanf("%d",&d_el);
    for(int i=0;i<=9;i++){
        if(arn[i]!=d_el){
            near[n]=arn[i];
            n++;
        }
    }
    printf("updated array: ");
    for(int j=0;j<=8;j++){
        printf("%d ",near[j]);
    }
    return 0;
}
