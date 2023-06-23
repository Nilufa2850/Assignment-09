/*
Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
        int x , a ,b, c ;

        printf("\nEnter 4 for exit.");
        printf("\n");
        printf("\n1.Isosceles triangle.");
        printf("\n2.Right angled triangle.");
        printf("\n3.Equilateral triangle.");
        printf("\n");


        
        while(1)
        {       
                printf("\n");
                printf("\nEnter your choice : ");
                scanf("%d",&x);
                
                switch(x)
                {
                        case 1: printf("\nEnter three value : ");
                                scanf("%d%d%d",&a,&b,&c);
                                if(a==b || b==c || c==a)
                                        printf("Isoscales Triangle.");
                                else
                                        printf("Not an Isoscales Triangle.");
                                break;

                        case 2: printf("\nEnter three value : ");
                                scanf("%d%d%d",&a,&b,&c);
                                if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a+b*b)
                                        printf("Right angled triangle.");
                                else
                                        printf("Not a Right angled triangle.");
                                break;

                        case 3: printf("\nEnter three value : ");
                                scanf("%d%d%d",&a,&b,&c);
                                if(a==b && b==c)
                                        printf("Equilateral triangle.");
                                else
                                        printf("Not an Equilateral triangle.");
                                break;

                        case 4: exit(0);

                        default : printf("\nInvalid triangle :(");

                }
        }

        return 0;
}
