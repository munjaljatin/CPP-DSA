// A reference is a nickname or an alias given to a variable
// TODO =>The reference variable must be initialised at the time of decalaraton.
// TODO Reference variable is mainly useful for parameter passing

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int val;
    int &r = val;
    r = 10;
    cout << val << " " << r;
    return 0;
}
