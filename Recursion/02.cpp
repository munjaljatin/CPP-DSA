#include <iostream>
using namespace std;

int fun(int n)
{
    if (n > 0)
    {
        return (fun(n - 1) + n);
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int a = 5;
    printf("%d", fun(a));
    return 0;
}
