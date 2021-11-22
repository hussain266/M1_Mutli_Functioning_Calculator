#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result=0.0f;

    /* Print welcome message */
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");

    /* Input two number and operator from user */
    scanf("%f %c %f", &num1, &op, &num2);

    /* Switch the value and perform action based on operator*/
    switch(op)
    {
        case '+': 
            result = num1 + num2;
            break;
            #include <stdio.h>


/** 
 * Function declarations for calculator
 */
float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);



int main()
{
    char op;
    float num1, num2, result=0.0f;

    /* Print welcome message */
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");

    /* Input two number and operator from user */
    scanf("%f %c %f", &num1, &op, &num2);

    switch(op)
    {
        case '+': 
            result = add(num1, num2);
            break;

        case '-': 
            result = sub(num1, num2);
            break;

        case '*': 
            result = mult(num1, num2);
            break;

        case '/': 
            result = div(num1, num2);
            break;

        default: 
            printf("Invalid operator");
    }

    /* Print the result */
    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return 0;
}


/**
 * Function to add two numbers
 */
float add(float num1, float num2)
{
    return num1 + num2;
}

/**
 * Function to subtract two numbers
 */
float sub(float num1, float num2)
{
    return num1 - num2;
}

/**
 * Function to multiply two numbers
 */
float mult(float num1, float num2)
{
    return num1 * num2;
}

/**
 * Function to divide two numbers
 */
float div(float num1, float num2)
{
    return num1 / num2;
}

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break;

        default: 
            printf("Invalid operator");
    }

    /* Prints the result */
    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return 0;
}
#include <stdio.h>


/** 
 * Function declarations for calculator
 */
float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);



int main()
{
    char op;
    float num1, num2, result=0.0f;

    /* Print welcome message */
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");

    /* Input two number and operator from user */
    scanf("%f %c %f", &num1, &op, &num2);

    switch(op)
    {
        case '+': 
            result = add(num1, num2);
            break;

        case '-': 
            result = sub(num1, num2);
            break;

        case '*': 
            result = mult(num1, num2);
            break;

        case '/': 
            result = div(num1, num2);
            break;

        default: 
            printf("Invalid operator");
    }

    /* Print the result */
    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return 0;
}


/**
 * Function to add two numbers
 */
float add(float num1, float num2)
{
    return num1 + num2;
}

/**
 * Function to subtract two numbers
 */
float sub(float num1, float num2)
{
    return num1 - num2;
}

/**
 * Function to multiply two numbers
 */
float mult(float num1, float num2)
{
    return num1 * num2;
}

/**
 * Function to divide two numbers
 */
float div(float num1, float num2)
{
    return num1 / num2;
}
