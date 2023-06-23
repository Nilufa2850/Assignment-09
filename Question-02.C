/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit */

#include<stdio.h>
#include<stdlib.h>
int main()
{
        int x , a, b ;

        printf("1. Addition.");
        printf("\n2. Subtraction.");
        printf("\n3. Multiplication.");
        printf("\n4. Division.");
        printf("\n5. Enter 5 for exit.");
        

        while(1)
        {       
                printf("\nEnter your choice : ");
                scanf("%d",&x);
                switch(x)
                {
                        case 1: printf("\nEnter two values : ");
                                scanf("%d%d",&a,&b);
                                printf("Sum of two numbers is %d",a+b);
                                break;

                        case 2: printf("\nEnter two values : ");
                                scanf("%d%d",&a,&b);
                                printf("Difference of two numbers is %d",a-b);
                                break;

                        case 3: printf("\nEnter two values : ");
                                scanf("%d%d",&a,&b);
                                printf("Product of two numbers is %d",a*b);
                                break;

                        case 4: printf("\nEnter two values : ");
                                scanf("%d%d",&a,&b);
                                printf("Quotient of two numbers is %d",a/b);
                                break;

                        case 5: exit(0);

                        default : printf("\nInvalid choice :(");

                }
        }

        return 0;
}
