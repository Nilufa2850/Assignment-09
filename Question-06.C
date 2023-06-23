/* Program to check whether a year is a leap year or not. Using switch
statement. */

#include<stdio.h>
int main()
{
        int x ;

        printf("Enter a year : ");
        scanf("%d",&x);
        
        switch(x % 100 == 0)
        {
                case 1: switch( x % 400 == 0)
                        {
                                case 1 : printf("%d is a leap year.",x);break;
                                case 0 : printf("%d is a nonleap year.",x);break;
                        }
                        break;
                
                case 0: switch( x % 4 == 0)
                        {
                                case 1 : printf("%d is a leap year.",x);break;
                                case 0 : printf("%d is a nonleap year.",x);break;
                        }
                
        }
                
        return 0;
}
