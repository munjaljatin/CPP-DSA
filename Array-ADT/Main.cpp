#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // Methods for Decalartion & Initialisation of an array in C/C++
    // Method 1 => Array of size 5 without value initialisation
    int arr[5];

    // Method 2 => Array of size 5 with all values initialised
    int marks[5] = {2, 4, 6, 8, 10};

    // Method 3 => Array of size 5 but initaliased only first 2 values
    float arr2[5] = {2.5, 3.75};

    // Traversing an array => visiting all the elements of the array once
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", arr2[i]);
    }
    return 0;
}
