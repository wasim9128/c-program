#include <stdio.h>
#include <conio.h>

int ADD(int a, int b);

int main()
{

    int num1, num2, result;

    printf("Enter Two Numbers To ADD : \n");
    scanf("%d%d", &num1, &num2);
    while (1)
    {       char choice[10] =" ";
        printf("what operation do you want to perform + - / * :");
        scanf("%c",&choice);
        printf("%c",choice);
       
        if (choice == "+")
        {
            
    result = ADD(num1, num2);//funtiction calling and store the return value in result

    printf("The Result Of %d + %d = %d", num1, num2, result);//Display the result
          
        }
        break;
    }
    

    getch();
    return 0;
}


//Definition of ADD() fumction
int ADD(int a, int b)
{
    return a + b;
}