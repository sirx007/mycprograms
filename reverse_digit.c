#include <stdio.h>

//program to reverse any number given by user

int main()
{
    int num, rev;
    printf("enter a number to reverse: \n");
    scanf("%d", &num);

    while (num > 0)
    {
        rev = num % 10;
        printf("%d", rev);
        num = num /10;

            
    }

        return 0;
}