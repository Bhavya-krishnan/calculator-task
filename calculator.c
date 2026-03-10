#include <stdio.h>
#include <math.h>

float add(float a, float b)
{
    return a + b;
}

float subtraction(float a, float b)
{
    return a - b;
}

float multiplication(float a, float b)
{
    return a * b;
}

float division(float a, float b)
{
    return a / b;
}

double power(double a, double b)
{
    return pow(a,b);
}

double squareroot(double n)
{
    if(n < 0)
    {
        printf("Error: Square root of negative number is not possible\n");
        return -1;
    }

    return sqrt(n);
}

int main()
{
    int choice;
    do
    {
        printf("Desktop calculator");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exponent\n");
        printf("6. Square Root\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);
        float a,b,result;
       
        if(choice==1)
        {
            printf("Addition");
printf("Enter two numbers: ");
       scanf("%f %f",&a,&b);

            result = add(a,b);
            printf("Result = %f",result);
        }
        else if(choice==2)
        {
            printf("Subtraction");
printf("Enter two numbers: ");
       scanf("%f %f",&a,&b);

                result = subtraction(a,b);
               printf("Result = %f",result);

        }
        else if(choice==3)
        {
            printf("Multiplication");
printf("Enter two numbers: ");
       scanf("%f %f",&a,&b);

                result = multiplication(a,b);
                printf("Result = %f",result);

        }
        else if(choice==4)
        {
            printf("Division");
printf("Enter two numbers: ");
       scanf("%f %f",&a,&b);

            if(b==0)
    {
        printf("Error: Division by zero\n");
    }
    else
    {
        result = division(a,b);
        printf("Result = %.2f\n",result);
    }

        }
        else if(choice==5)
        {
            printf("Exponent");

            float base,exp,powerResult;

    printf("Enter base and exponent: ");
    scanf("%f %f",&base,&exp);

    powerResult = power(base,exp);

    printf("Result = %f",powerResult);
        }
        else if(choice==6)
        {
            printf("Square Root");

            double num,sqrtResult;

    printf("Enter a number: ");
    scanf("%lf",&num);

    sqrtResult = squareroot(num);

    if(sqrtResult != -1)
    {
        printf("Square root = %.2lf\n",sqrtResult);
    }

        }
        else if(choice==7)
        {
            printf("Exiting program");
        }
        else
        {
            printf("Invalid choice");
        }

    }while(choice!=7);

    return 0;
}


