#include <stdio.h>
#include <conio.h>

int ADD(int a, int b);
int SUB(int a, int b);
int MULT(int a, int b);
int DIV(int a, int b);

int main()
{
    int num1, num2, result;
    char choice; // Changed to a single character variable

    printf("Enter Two Numbers To Perform an Operation: \n");
    scanf("%d %d", &num1, &num2);

    printf("Enter the operation you want to perform (+ for addition, - for subtraction): ");
    scanf(" %c", &choice); // Note the space before %c to consume any newline character.

    if (choice == '+')
    {
        result = ADD(num1, num2);
        printf("The Result Of %d + %d = %d", num1, num2, result);
    }
    else if (choice == '-')
    {
        result = SUB(num1, num2);
        printf("The Result Of %d - %d = %d", num1, num2, result);
    }
    else if (choice == '*')
    {
        result = MULT(num1, num2);
        printf("The Result Of %d X %d = %d", num1, num2, result);
    }
    else if (choice == '/')
    {
        if (num1 > num2)
        {
            result = DIV(num1, num2);
            printf("The Result Of %d / %d = %d", num1, num2, result);
        }
        else
        {
            printf("Please! Provide Valid Oprands");
        }
    }
    else
    {
        printf("Invalid operation.");
    }

    getch();
    return 0;
}

// Definition of ADD() function
int ADD(int a, int b)
{
    return a + b;
}

// Definition of SUB() function
int SUB(int a, int b)
{
    return a - b;
}
// Definition of MULT() function
int MULT(int a, int b)
{
    return a * b;
}

// Definition of DIV() function
int DIV(int a, int b)
{
    return a / b;
}
