/* Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill. */

#include<stdio.h>
int main()
{
        float unit, rupee = 0, totalRupee = 0;
    printf("\nThe first 50 units Rs. 0.50/unit");
    printf("\nThe next 100 units Rs. 0.75/unit");
    printf("\nThe next 100 units Rs. 1.20/unit");
    printf("\nUnits above 250 Rs. 1.50/unit");
    printf("\nAn additional surcharge of 20% is added to the bill.");
    
    printf("\nEnter consumed unit : ");
    scanf("%f", &unit);

    switch (unit <= 50)
    {
        case 1 : rupee = unit * 0.50;
                    break;

        case 0 : switch (unit <= 150)
                {
                    case 1 : rupee = 25 + (unit - 50) * 0.75;
                                break;

                    case 0 : switch (unit <= 250)
                            {
                                case 1 : rupee = 100 + (unit - 150) * 1.20;
                                            break; 

                                case 0 : rupee = 220 + (unit - 250) * 1.50;
                                            break; 
                            } break;
                } break;
    }

    totalRupee = rupee + rupee * 0.20;
    printf("\nTotal Payble Bill is : %.2f", totalRupee);
                
        return 0;
}
