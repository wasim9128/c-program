#include <stdio.h>
#include <conio.h>

float ADD(float a, float b);
float SUB(float a, float b);
float MULT(float a, float b);
float DIV(float a, float b);

float main()
{
    float num1, num2, result;
    char choice; // Changed to a single character variable

    prfloatf("Enter Two Numbers To Perform an Operation: \n");
    scanf("%d %d", &num1, &num2);

    prfloatf("Enter the operation you want to perform (+ for addition, - for subtraction, * for Multiplication, / for Div): ");
    scanf(" %c", &choice); // Note the space before %c to consume any newline character.

    if (choice == '+')
    {
        result = ADD(num1, num2);
        prfloatf("The Result Of %d + %d = %d", num1, num2, result);
    }
    else if (choice == '-')
    {
        result = SUB(num1, num2);
        prfloatf("The Result Of %d - %d = %d", num1, num2, result);
    }
    else if (choice == '*')
    {
        result = MULT(num1, num2);
        prfloatf("The Result Of %d X %d = %d", num1, num2, result);
    }
    else if (choice == '/')
    {
        if (num1 > num2)
        {
            result = DIV(num1, num2);
            prfloatf("The Result Of %d / %d = %d", num1, num2, result);
        }
        else
        {
            prfloatf("Please! Provide Valid Oprands");
        }
    }
    else
    {
        prfloatf("Invalid operation.");
    }

    getch();
    return 0;
}

// Definition of ADD() function
float ADD(float a, float b)
{
    return a + b;
}

// Definition of SUB() function
float SUB(float a, float b)
{
    return a - b;
}
// Definition of MULT() function
float MULT(float a, float b)
{
    return a * b;
}

// Definition of DIV() function
float DIV(float a, float b)
{
    return a / b;
}
