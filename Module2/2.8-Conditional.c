#include<stdio.h>
int main()
{
    int tk;
    // printf("Enter the amount of TK : ");
    scanf("%d", &tk);

    if(tk >= 5000)
    {
        printf("Going to Cox's Bazar \n");
        if(tk >= 10000)
        {
            printf("Then Going to Saint Martin\n");
        }
        else{
            printf(" And then Going to HOme\n ");
        }
    }
    else{
            printf("Not going anywhere\n");
    }
}