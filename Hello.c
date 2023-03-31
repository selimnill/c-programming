#include<stdio.h>
int main()
{
    char fullName[30];
    printf("Enter your full name : ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Your full name is : %s\n", fullName);

    return 0;
}