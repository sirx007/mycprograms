#include <stdio.h>

//program to add two numbers given by user

int main()
{
    int a;
    int b;
    
    printf("enter first number: \n");
    scanf("%d", &a);

    printf("enter first number: \n");
    scanf("%d", &b);

    int sum = a + b;

    printf("The sum of two number is %d", sum);

    return 0;

}