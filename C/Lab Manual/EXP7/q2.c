#include <stdio.h>
int print_arry(int num[2][2]);
int main()
{
    int num[2][2]={{1,2},{5,6}};
    print_arry(num);
    return 0;
}

int print_arry(int num[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
}