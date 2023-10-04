#include <stdio.h>
#include <string.h>
struct company{
    char Name[20];
    char address[50];
    char phone[11];
    int noofemployee;
};

int main()
{
    struct company c1;
    printf("Enter Details\n");
    printf("Name: ");
    fgets(c1.Name,sizeof(c1.Name),stdin);
    printf("Address: ");
    fgets(c1.address,sizeof(c1.address),stdin);
    printf("Phone: ");
    fgets(c1.phone,sizeof(c1.phone),stdin);
    printf("No of Employees: ");
    scanf("%d",&c1.noofemployee);

    printf("Entered Details:\n");
    printf("Name: %sAddress: %sPhone: %s\nNo of employee: %d",c1.Name,c1.address,c1.phone,c1.noofemployee);
    return 0;
}