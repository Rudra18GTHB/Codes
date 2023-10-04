#include <stdio.h>
 struct result{
    char sub[20];
    int marks;
 };

int main()
{
    struct result s1;
    printf("Enter Data:\n");
    printf("Subject: ");
    scanf("%s",s1.sub);
    printf("Marks: ");
    scanf("%d",&s1.marks);
    printf("Entered Data:\n");
    printf("Subject: %s\nMarks: %d",s1.sub,s1.marks);
    return 0;
}
