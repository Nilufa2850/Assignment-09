/* C program to find all roots of a quadratic equation using switch case. */

#include<stdio.h>
#include<math.h>
int main()
{
        float D, imagi, a, b, c, root1, root2; 
    printf("Enter value of a, b, c for eqn (ax^2 + bx + c): ");
    scanf("%f %f %f", &a, &b, &c);

    D = (b*b - 4*a*c);

    switch (D > 0)
    {
        case 1 : root1 = (-b + sqrt(D)) / (2*a);
                root2 = (-b - sqrt(D)) / (2*a);
                printf("Two distinct and real roots are %.2f & %.2f", root1, root2);
                break;

        case 0 : switch (D < 0)
                {
                    case 1 : root1 = root2 = -b / (2 * a);
                            imagi = sqrt(-D) / (2 * a);
                            printf("Two distinct complex roots are : (%.2f + i%.2f) & (%.2f - i%.2f)", root1, imagi, root2, imagi);
                            break;

                    case 0 : root1 = root2 = -b / (2 * a);
                            printf("Two equal and real roots are : %.2f and %.2f", root1, root2);
                            break;                    

                } break;

    }      
        
                
        return 0;
}
