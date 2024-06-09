#include<stdio.h>
int main(){
    int a[20][20],n,i,j,key,r,c,k,l;
    printf("Enter the order of Magic Square: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=0;
        }
    }
    r=0;
    c=n/2;
    a[r][c]=1;
    for(key=2;key<=n*n;key++)
    {
        if(r>=1)
            k=r-1;
        else
            k=n-1;
        if(c>=1)
            l=c-1;
        else
            l=n-1;
        if(a[k][l]>=1)
            r=(r+1)%n;
        else
        {
            r=k;
            c=l;
        }
        a[r][c]=key;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//O(n^2)