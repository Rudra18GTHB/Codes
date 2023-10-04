#include <stdio.h>
int main()
{
    int m1[3][3],m2[3][3],r[3][3];
    //enter elemnts for array1
    printf("Enter elements for 1st array: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter elements for 2nd array: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            r[i][j]=0;
            for (int k = 0; k < 3; k++) {
                r[i][j] += m1[i][k] * m2[k][j];
                
            }
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
    return 0;
}
