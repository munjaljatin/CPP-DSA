// Author: Jatin Munjal
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Complex
{
    int real;
    int imaginary;
};

int main(int argc, char const *argv[])
{
    /* code */
    // decalaration of normal data variables
    int num;
    float marks;
    // A pointer is a special type of varaible in c/c++ that stores the address of another data variables as well as derived data variables
    /*
        Pointers are used for accessing
            1. Accessing the Heap Memory
            2. Accessing the Resources that are present outside the program.
            3. Parameter Passing.
    */
    // decalaration of pointer variable
    // an integer pointer;
    int *ptr;
    ptr = &num;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << sizeof(double);
    float *ptr1;
    double db = 2.3344556;

    int *arr;
    arr = (int *)malloc(10 * sizeof(int));
    cout << arr[0];

    int marks1[] = {10, 20, 30, 50, 50};
    int *m;
    m = marks1;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << m[i] << " ";
    }
    // c++ syntax for freeing the dynamically allocated memory
    // for array => delete []p
    // for any other variable => delete <variable_name>

    // c syntax for freeing the dynamically allocated memory
    // free(variable_name);
    free(arr);

    int *p1;
    cout << sizeof(p1) << endl;
    float *p2;
    cout << sizeof(p2) << endl;
    char *p3;
    cout << sizeof(p3) << endl;
    double *p4;
    cout << sizeof(p4) << endl;
    Complex *p5;
    cout << sizeof(p5);
    return 0;
}
