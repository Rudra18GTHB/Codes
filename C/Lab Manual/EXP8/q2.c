#include <stdio.h>
#include <string.h>
struct datatype1{
    int roll_no;
    char Name[20];
};
struct datatype2{
    struct datatype1 stud_1;
    float Marks;
};

int main(){
    struct datatype2 stud_2;
    stud_2.stud_1.roll_no=63;
    gets(stud_2.stud_1.Name);
    stud_2.Marks=88.8;
    printf("Entered details:\n");
    printf("Name: %s\n",stud_2.stud_1.Name);
    printf("Roll No: %d\n",stud_2.stud_1.roll_no);
    printf("Marks: %f",stud_2.Marks);
    return 0;
}