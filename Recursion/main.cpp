#include <iostream>
using namespace std;

// Recursive function
void fun(int val)
{
    if (val > 0)
    {
        printf("%d ", val);
        fun(val - 1);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int val;
    printf("Enter a number: ");
    scanf("%d", &val);
    fun(val);
    return 0;
}
