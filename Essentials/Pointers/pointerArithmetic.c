#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a = 10;
    int *ptr;
    printf("%d\n", ptr);
    ptr = &a;
    printf("%d\n", ptr);
    printf("The value at address that ptr contains is %d\n", (*ptr));

    // Pointer Arithmetic
    // character type
    char ch = 'A';
    char *c;
    c = &ch;
    printf("%c\n", ch);
    printf("%d\n",c);
    printf("%c\n",*c);
    printf("%d", (c+1));

    // double type
    double db = 23.234567;
    double *D = &ch;
    printf("\n%f\n", db);
    printf("%d\n", D);
    printf("%d\n", (D+2));
    printf("%d\n", (D+5));
    printf("%f\n", *(D+5));

    // float type
    int num = 1025;
    float *f;
    int *P;
    P = &num;
    f = P;
    char *C = (char *)P;
    printf("Address of num is %d\n", f);
    printf("value at address %d is %d %d", f, *C, *(C+1));
    return 0;
}
