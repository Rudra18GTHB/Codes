#include <stdio.h>
#include <string.h>
void perm(char c[], int k, int n){
    int i;
    char t;
    if(k==n){
        printf("\n%s",c);
    }
    else{
        for(i=k; i<=n;i++){
            t=c[k];c[k]=c[i];c[i]=t;
            perm(c, k+1, n);
            t=c[k];c[k]=c[i];c[i]=t;
        }
    }
}

void main(){
    char a[]="ABC";
    int n= strlen(a);
    perm(a,0,n-1);
}