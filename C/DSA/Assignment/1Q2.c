#include <stdio.h>

struct student{
    int Reg_no;
    char Name[20];
    char Branch[20];
    double CGPA;
};

void linearsearch(struct student Engineer[], int size){
    int element_to_search,count=0;
    printf("Enter the Registration Number:");
    scanf("%d",&element_to_search);
    for(int i=0;i<size;i++){
        if(Engineer[i].Reg_no==element_to_search){
            printf("Name: %s",Engineer[i].Name);
            printf("Branch: %s",Engineer[i].Branch);
            printf("CGPA: %lf",Engineer[i].CGPA);
            break;
        }
    }
    printf("Element Not Found");
}

void insertionsort(struct student Engineer[], int size)
{
    int key,j;
    struct student current_engineer;
    for (int i = 1; i < size; i++)
    {
        current_engineer=Engineer[i];
        j=i;
        while(j>=0 && Engineer[j].CGPA< current_engineer.CGPA){
            Engineer[j] = Engineer[j-1];
            j--;
        }
        Engineer[j] = current_engineer;
    }
    for (int k = 0; k < size; k++)
    {
        printf("Registration Number: %d ", Engineer[k].Reg_no);
        printf("Name: %s",Engineer[k].Name);
        printf("Branch: %s",Engineer[k].Branch);
        printf("CGPA: %lf",Engineer[k].CGPA);
    }
}

int main(int argc, char const *argv[])
{
    struct student Engineer[2];
    int size;
    for (int i = 0; i < 2; i++)
    {
        Engineer[i].Reg_no = 1000+i;
        printf("Enter the name of Student: ");
        scanf("%s",Engineer[i].Name);
        printf("Enter the Branch: ");
        scanf("%s",Engineer[i].Branch);
        printf("Enter the CGPA: ");
        scanf("%lf",&Engineer[i].CGPA);
        ++size;
    }
    linearsearch(Engineer,size);
    insertionsort(Engineer,size);
    return 0;
}
