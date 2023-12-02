// Author: Jatin Munja
#include <iostream>
using namespace std;

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
    cout << ptr;
    return 0;
}
