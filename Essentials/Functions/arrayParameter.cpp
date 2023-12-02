#include <iostream>
using namespace std;

void traverse(int A[], int n) // the variable A[] is pointer to an array
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl
         << "Bye!";
}

// function for returning array as a parameter
int *fun(int length)
{
    int *ptr;
    ptr = (int *)malloc(length * sizeof(int));
    return (ptr);
}

int main(int argc, char const *argv[])
{
    /* code */
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(arr) / sizeof(arr[0]);
    // passing the array as a parameter in the function traverse()
    traverse(arr, length);
    int *A;
    A = fun(10);
    cout << "Enter the values in the array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> A[i];
    }
    traverse(A, 10);
    return 0;
}