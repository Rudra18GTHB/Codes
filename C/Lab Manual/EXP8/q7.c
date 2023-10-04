#include <stdio.h>
typedef struct {
    float real;
    float imaginary;
} complex;

complex add(complex num1, complex num2) {
    complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

complex subtract(complex num1, complex num2) {
    complex result;
    result.real = num1.real - num2.real;
    result.imaginary = num1.imaginary - num2.imaginary;
    return result;
}

void displayComplex(complex num) {
    printf("%.2f + %.2fi\n", num.real, num.imaginary);
}

int main() {
    complex num1, num2, sum, difference;
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imaginary);
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imaginary);
    sum = add(num1, num2);
    difference = subtract(num1, num2);
    printf("\nSum: ");
    displayComplex(sum);
    printf("Difference: ");
    displayComplex(difference);
    return 0;
}