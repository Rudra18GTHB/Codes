#include<stdio.h>
#define MAX 100

typedef struct Job{
    char id[5];
    int deadline;
    int profit;
}Job;

int minvalue(int x,int y){
    if(x<y)
        return x;
    else
        return y;
}

void jobsequencing(Job jobs[],int n){
    int i,j,k,timeslot[MAX],filledTimeSlot=0,maxprofit;
    int dmax = 0;
    for(i=0;i<n;i++){
        if(jobs[i].deadline>dmax)
            dmax=jobs[i].deadline;
    }  
    printf("\nDmax=%d",dmax);
    for(i=1;i<=dmax;i++){
        timeslot[i]=-1;
    }
    for(i=1;i<=n;i++){
        k=minvalue(dmax,jobs[i-1].deadline);
        while(k>=1){
            if(timeslot[k]==-1){
                timeslot[k]=i-1;
                filledTimeSlot++;
                break;
            }
            k--;
        }
        if(filledTimeSlot==dmax)
            break;
    }
    printf("\nRequired Jobs:");
    for(i=1;i<=dmax;i++){
        printf("%s",jobs[timeslot[i]].id);
        if(i<dmax)
            printf("-->");
    }
    maxprofit = 0;
    for(i=1;i<=dmax;i++){
        maxprofit=maxprofit+jobs[timeslot[i]].profit;
    }
    printf("\nMax Profit = %d",maxprofit);
}

int main(){
    int i,j;
    Job jobs[5]={
        {"j1",2,60},
        {"j2",1,100},
        {"j3",3,20},
        {"j4",2,40},
        {"j5",1,20}
    };
    Job temp;
    int n=5;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(jobs[j+1].profit>jobs[j].profit){
                temp=jobs[j+1];
                jobs[j+1]=jobs[j];
                jobs[j]=temp;
            }
        }
    }
    printf("\nJobs\tDeadLine\tProfit");
    for(i=0;i<n;i++){
        printf("\n%s\t%d\t%d",jobs[i].id,jobs[i].deadline,jobs[i].profit);
    }
    jobsequencing(jobs,n);
}

//O(n^2)