#include <stdio.h>

//prompt a user to take any number and give table of multipication

int main()
{
    int n;

    printf("Enter a number: \n");
    scanf("%d", &n);

    for( int i = 1; i <= 10; i++)
    {
        printf("%d \n", n * i);
    }

    return 0;
}