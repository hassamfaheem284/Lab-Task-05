#include <stdio.h>

int main()
{
    int X, Y, Z, W;

    printf("Enter Number X : ");
    scanf("%d", &X);

    printf("Enter Number Y : ");
    scanf("%d", &Y);

    printf("Enter Number Z : ");
    scanf("%d", &Z);

    printf("Enter Number W : ");
    scanf("%d", &W);

    if(X > Y)
    {
        if(X > Z)
        {
            if(X > W)
            {
                printf("The Largest Value Is : %d", X);
            }
            else
            {
                printf("The Largest Value Is : %d", W);
            }
        }
        else
        {
            if(Z > W)
            {
                printf("The Largest Value Is : %d", Z);
            }
            else
            {
                printf("The Largest Value Is : %d", W);
            }
        }
    }
    else
    {
        if(Y > Z)
        {
            if(Y > W)
            {
                printf("The Largest Value Is : %d", Y);
            }
            else
            {
                printf("The Largest Value Is : %d", W);
            }
        }
        else
        {
            if(Z > W)
            {
                printf("The Largest Value Is : %d", Z);
            }
            else
            {
                printf("The Largest Value Is : %d", W);
            }
        }
    }
}
