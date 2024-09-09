#include <stdio.h>

int main(int argc, char const *argv[])
{
    int firstNumber, 
        secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    printf("First number: %d\n", firstNumber);
    printf("Second number: %d\n", secondNumber);
    printf("Sum: %d\n", firstNumber + secondNumber);

    return 0;
}
