#include<stdio.h>

int table[6][12];
int max(int,int);

void DKP(int, int, int[], int[]);

int main(){
    int w[]={0,1,2,5,6,7};
    int v[]={0,1,6,18,22,28};
    int W=11;
    int n=5,i,j;
    printf("0/1 Knapsack problem using dynamic programming");
    printf("\nGiven Data...\n");
    printf("\nw[i]       v[i]");
    printf("...........");
    for(i=1;i<=n;i++){
        printf("\n%d       %d",w[i],v[i]);
        printf("\nCapacity=%d",W);
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=W;j++){
            table[i][j]=0;
        }
    }
    DKP(n,W,w,v);
}

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;  
    }
}

void DKP(int n, int W, int w[6], int v[6]){
    int i,j,val1,val2;
    for(i=0;i<=n;i++){
        for(j=0;j<=W;j++){
            table[i][0]=0;
            table[0][j]=0;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=W;j++){
            if(j<w[i]){
                table[i][j]=table[i-1][j];
            }
            else if(j>=w[i]){
                val1=table[i-1][j];
                val2=v[i]+table[i-1][j-w[i]];
                table[i][j]=max(val1,val2);
            }
        }
    }
    printf("\nTable constructed is....\n");
    for(i=0;i<=n;i++){
        for(j=0;j<=W;j++){
            printf(" %5d",table[i][j]);
        }
        printf("\n");
    }
}

//O(n*w)