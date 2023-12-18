#include <stdio.h>
void towerofhanoi(int n, char src, char aux, char dest);
int main()
{
    towerofhanoi(3,'A','B','C');
    return 0;
}

void towerofhanoi(int n, char src, char aux, char dest){
    if(n==1){
        printf("Disk 1 Moved from %c to %c\n",src,dest);
        return;
    }
    towerofhanoi(n-1, src, dest, aux);
    printf("Disk %d Moved from %c to %c\n",n,src,dest);
    towerofhanoi(n-1,aux,src,dest);
}
