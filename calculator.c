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

        if(choice==1)
        {
            printf("Addition");

            
        }
        else if(choice==2)
        {
            printf("Subtraction");
        }
        else if(choice==3)
        {
            printf("Multiplication");
        }
        else if(choice==4)
        {
            printf("Division");
        }
        else if(choice==5)
        {
            printf("Exponent");
        }
        else if(choice==6)
        {
            printf("Square Root");
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


