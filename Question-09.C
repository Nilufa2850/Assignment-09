/* Program to Convert even number into its upper nearest odd number
Switch Statement. */

#include<stdio.h>
int main()
{
        int x ;
        printf("Enter an even number : ");
        scanf("%d",&x);

        switch(x % 2 == 0)
        {
                case 1: printf("Now, Upper nearest odd number is %d",x+1); break;

                case 0: printf("%d",x);
                        
        }
                
        return 0;
}
