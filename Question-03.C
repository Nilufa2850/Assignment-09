/*Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
        int x ;

        printf("\nEnter 8 for exit.");
        
        while(1)
        {       
                printf("\nEnter a week number (1 to 7) : ");
                scanf("%d",&x);
                
                switch(x)
                {
                        case 1: printf("Today is a Sunday."); break;

                        case 2: printf("Today is a Monday."); break;

                        case 3: printf("Today is a Tuesday."); break;

                        case 4: printf("Today is a Wednesday."); break;

                        case 5: printf("Today is a Thursday."); break;

                        case 6: printf("Today is a Friday."); break;

                        case 7: printf("Today is a Saturday."); break;

                        case 8: exit(0);

                        default : printf("\nInvalid day :(");

                }
        }

        return 0;
}
