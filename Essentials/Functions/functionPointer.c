#include <stdio.h>

// function Declaration or function prototype
int sum(int, int);

// Basic sum() function
// Definition of sum() function 
int sum(int a, int b){
    return (a+b);
}

// function pointer
// declaration & initialization of function pointer
int (*ptr)(int, int) = &sum;

int main(int argc, char const *argv[])
{
    /* code */
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int sum = 0;
    sum = (*ptr)(num1, num2);
    printf("Sum is %d", sum);
    return 0;
}
