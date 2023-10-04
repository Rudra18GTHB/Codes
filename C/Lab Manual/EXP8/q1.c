#include <stdio.h>
#include <string.h>
struct cust{
    char cname[20];
    int age;
    float salary;
};

void main()
{
    struct cust customers[5];
    for(int i=0;i<5;i++){
        printf("Customer %d\n", i + 1);
        printf("Name: ");
        fgets(customers[i].cname,20,stdin);
        printf("Age: ");
        scanf("%d",&customers[i].age);
        printf("Salary: ");
        scanf("%f",&customers[i].salary);
    }
    printf("Entered records:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Name: %c\n", customers[i].cname);
        printf("Age: %d\n", customers[i].age);
        printf("Salary: %.2f\n", customers[i].salary);
        printf("\n");
    }
    
}