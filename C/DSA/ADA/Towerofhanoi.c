#include <stdio.h>
void towerofhanoi(int n, char src, char aux, char dest);
int main()
{
    towerofhanoi(3,'A','B','C');
    return 0;
}

void towerofhanoi(int n, char src, char aux, char dest){
    if(n>=1){
        towerofhanoi(n-1, src, dest, aux);
        printf("Disk Moved from %c to %c\n",src,aux);
        towerofhanoi(n-1,dest,aux,src);
    }
}

//O(2^n)