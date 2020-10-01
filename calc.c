#include <stdio.h>
int main()
{
    char op;
    float num1,num2,result;    
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");
    scanf("%f %c %f", &num1, &op, &num2);
    switch(op)
    {
            //This case is for Sum
        case '+': 
            result = num1 + num2;
            break;

        case '-': 
            //This case is for Subtraction
            result = num1 - num2;
            break;

        case '*': 
            //This case is for Multiplication
            result = num1 * num2;
            break;

        case '/': 
            //This case is for Division
            result = num1 / num2;
            break;

        default: 
            printf("Invalid operator");
    }
    printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
    return 0;
}
