#include <stdio.h>
#include <string.h>
union Data{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data data;
    data.i=10;
    data.f=11.2;
    strcpy(data.str,"My name is Rudra Kashyap");
    return 0;
}
