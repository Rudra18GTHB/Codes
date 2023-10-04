#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the order of matrix: ");
    scanf("%d",&m);
    scanf("%d",&n);
    int m1[m][n],m2[m][n],e,sum;
    printf("Enter the elements for 1st matrix: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&e);
            m1[i][j]=e;
        }
    }
    printf("Enter the elements for 2st matrix: ");
    for(int k=0;k<m;k++){
        for(int l=0;l<n;l++){
            scanf("%d",&e);
            m2[k][l]=e;
        }
    }
    printf("Sum of matrix 1 and 2 is:\n");
    for(int o=0;o<m;o++){
        for(int p=0;p<n;p++){
            sum=m1[o][p]+m2[o][p];
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}