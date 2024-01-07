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

    // Method 3 => Array of size 5 but initaliased only first 2 values, rest of the values will initialise to zero(0)
    float arr2[5] = {2.5, 3.75};

    // Traversing an array => visiting all the elements of the array once
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", arr2[i]);
    }

    // Method 4 => for initialising the all the values of the array to zero(0)
    int arr3[10] = {0};

    // Method 5 => Not providing the size of the array
    char myFirstName[] = {'J', 'a', 't', 'i', 'n'};

    int sizeofCharArray = sizeof(myFirstName) / sizeof(myFirstName[0]);

    for (int i = 0; myFirstName[i] != '\0'; i++)
    {
        printf("%c ", myFirstName[i]);
    }

    // Dynamic Arrays
    // CPP syntax for creating dynamic arrays
    int *ptr;
    ptr = new int[5];
    // Dynamic arrays
    // C Syntax
    char *name;
    name = (char *)malloc(sizeof(char) * 11);
    // name = ['J','a','t','i','n',' ' ];
    // for (int i = 0; i < 11; i++)
    // {
    //     scanf("%c", &name[i]);
    // }
    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     printf("%c", name[i]);
    // }

    // Increasing the size of dynamic array
    int *p = NULL;
    int pp[5] = {2, 4, 5, 6, 7};
    p = (int *)malloc(sizeof(int) * 5);
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;
    printf("Size of p is %d and size of pp is %d\n", sizeof(p[0]), sizeof(pp));
    int val = 0;
    int *q = NULL;
    printf("How many elements you want to enter: ");
    scanf("%d", &val);
    q = (int *)malloc(val * sizeof(int));
    free(p);
    p = q;
    q = NULL;

    // Traversing the dynamically created array
    // Entering the values
    for (int i = 0; i < val; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < val; i++)
    {
        printf("%d ", p[i]);
    }
    cout << "Bye!";
    return 0;
}
