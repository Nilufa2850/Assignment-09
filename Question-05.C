/*
Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");
*/

#include<stdio.h>
int main()
{
        int x ;

        printf("Enter a number (1 to 3) : ");
        scanf("%d",&x);
        
        switch(x)
        {
                case 1: if(x==1)
                        printf("good"); break;
                
                case 2: if(x==2)
                        printf("better"); break;

                case 3: if(x==3)
                        printf("best"); break;
                
                default : printf("Invalid number :(");
                
        }
                
        return 0;
}
