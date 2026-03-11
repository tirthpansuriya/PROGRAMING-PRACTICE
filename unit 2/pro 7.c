
#include <stdio.h>

// Define structure for complex number
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}

int main() {
    struct Complex num1, num2, sum;

    // Input first complex number
    printf("Enter real and imaginary parts of first complex number:\n");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input second complex number
    printf("Enter real and imaginary parts of second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imag);

    // Function call
    sum = addComplex(num1, num2);

    // Output result
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
