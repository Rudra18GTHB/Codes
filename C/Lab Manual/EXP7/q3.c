#include <stdio.h>
void func() {
    printf("Inside func()\n");
}
int main() {
    printf("Address of func(): %d\n",&func);
    return 0;
}