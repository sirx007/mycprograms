#include <stdio.h>

int main(void)
{
    int n, c = 0;
    printf("enter a number: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        c = c+1;
    }

    if ( c==2) 
    {
    printf("The number is prime number");
    }
        else 
        {
    printf("the number is composite number");
         }


}