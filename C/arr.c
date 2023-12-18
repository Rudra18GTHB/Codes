#include <stdio.h>


int main(int argc, char const *argv[])
{
    int arr[4][3]={{2,7,4},{4,0,1},{5,8,3},{1,0,3}};
    printf("%d",arr[0][1]);
    int arr3[2][3][2]={{{2,7},
                    {4,4},
                    {0,1}},
                    {{2,7},
                    {4,4},
                    {0,1}}};

    printf("%d",arr3[0][0][0]);
    return 0;
}
