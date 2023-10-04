#include <stdio.h>
#include <string.h>
struct employee{
    char Name[20];
    int emp_id;
    int sal;
};

int main()
{
    struct employee emp1;
    printf("Name: ");
    gets(emp1.Name);
    printf("Employee ID: ");
    scanf("%d",&emp1.emp_id);
    printf("Salary: ");
    scanf("%d",&emp1.sal);

    printf("Employee Details:\n");
    printf("%s\n%d\n%d",emp1.Name,emp1.emp_id,emp1.sal);
    return 0;
}
