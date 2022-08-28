//program to check weather a number is even or odd

#include <stdio.h>

int main()
{
    int num;

    printf("please enter a number: \n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("given number is even \n");
    }
    else 
    {
        printf("given number is odd \n");
    }

        return 0;
}