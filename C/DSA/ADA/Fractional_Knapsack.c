#include<stdio.h>

void knapsack(int, float[], float[], float[], int);

void knapsack(int n,float weight[], float value[],float ratio[],int m){
    float x[20],tp=0;
    int i,j;
    int u=m;
    for(i=0;i<n;i++){
        x[i]=0.0;
    }
    for(i=0;i<n;i++){
        if(weight[i]>u){
            break;
        }
        else{
            x[i]=1.0;
            tp=tp+ value[i];
            u=u-weight[i];
        }
    }
    if(i<n){
        x[i]=u/weight[i];
    }
    tp=tp+(x[i]*value[i]);
    printf("\nWeight=");
    for(i=0;i<n;i++){
        printf("%.2f\t",weight[i]);
    }
    printf("\nValue=");
    for(i=0;i<n;i++)
        printf("%.2f\t",value[i]);
    printf("\nP/W=");
    for(i=0;i<n;i++)
        printf("%.2f\t",ratio[i]);
    printf("\nX=");
    for(i=0;i<n;i++)
        printf("%.2f\t",x[i]);
    printf("\nMaximum Profit is=%f",tp);
}

int main(){
    float weight[20],value[20],ratio[20],temp;
    int i,j,n,m;
    printf("\nKnapsack problem using greedy approach");
    printf("\nEnter number of objects=");
    scanf("%d",&n);
    printf("\nEnter the weight and value of each object=");
    for(i=0;i<n;i++){
        printf("\nEnter the weight and value of each object %d=",i);
        scanf("%f%f",&weight[i],&value[i]);
    }
    printf("\nEnter the capacity of knapsack=");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        ratio[i]=value[i]/weight[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(ratio[i]<ratio[j]){
                temp=ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;
                temp=weight[j];
                weight[j]=weight[i];
                weight[i]=temp;
                temp=value[j];
                value[j]=value[i];
                value[i]=temp;
            }
        }
    }
    knapsack(n,weight,value,ratio,m);
    return 0;
}

//O(n^2)