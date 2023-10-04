#include <stdio.h>
int main()
{
    int m1[3][3]={1,2,3,4,5,6,7,8,9};
    printf("Front Digonal:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                printf("%d\n",m1[i][j]);
            }
        }
    }
    printf("Back Diagonal:\n");
    for(int k=0;k<3;k++){
        for(int l=0;l<3;l++){
            if(l+k==2){
                printf("%d\n",m1[k][l]);
            }
        }
    }
    return 0;
}
