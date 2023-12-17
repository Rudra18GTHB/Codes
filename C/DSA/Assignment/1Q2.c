#include <stdio.h>

struct student{
    int Reg_no;
    char Name[20];
    char Branch[20];
    double CGPA;
};

void linearsearch(struct student* Engineer, int size){
    int element_to_search,count=0;
    printf("Enter the Registration Number:");
    scanf("%d",&element_to_search);
    for(int i=0;i<size;i++){
        if(Engineer[i].Reg_no==element_to_search){
            printf("Name: %s",Engineer[i].Name);
            printf("Branch: %s",Engineer[i].Branch);
            printf("CGPA: %lf",Engineer[i].CGPA);
            return 0;
        }
    }
    printf("Element Not Found");
    return 0;
}

int main(int argc, char const *argv[])
{
    struct student Engineer[2];
    int size;
    for (int i = 0; i < 2; i++)
    {
        Engineer[i].Reg_no = 1000+i;
        printf("Enter the name of Student: ");
        scanf("%[^\n]",&Engineer[i].Name);
        printf("Enter the Branch: ");
        scanf("%[^\n]",&Engineer[i].Branch);
        printf("Enter the CGPA: ");
        scanf("%lf",&Engineer[i].CGPA);
        ++size;
    }
    linearsearch(Engineer,size);
    return 0;
}
