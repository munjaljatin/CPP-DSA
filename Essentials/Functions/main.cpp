// Functions in c/c++
#include <iostream>
using namespace std;

// function for swapping values
void swap(int *val1, int *val2)
{
    int temp = 0;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

// function for adding two numbers
int add(int a, int b) // Prototype or Header of function and variable a and b are formal parameters
{
    int c; /* Body or Elaboration of Function */
    c = a + b;
    return (c);
}

int main(int argc, char const *argv[])
{
    /* code */
    int x, y, z;
    x = 20;
    y = 10;
    z = add(x, y); // here x and y are actual parameters
    cout << "Sum is " << z << endl;

    int num1, num2;
    num1 = 70;
    num2 = 80;
    cout << "num1 and num2 before swapping" << endl;
    cout << "num1 = " << num1 << " & num2 = " << num2 << endl;
    swap(&num1, &num2);
    cout << "num1 and num2 after swapping the original parameters" << endl;
    cout << "num1 = " << num1 << " & num2 = " << num2;
    return 0;
}