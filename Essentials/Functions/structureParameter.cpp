#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int area(Rectangle rr)
{
    int area = 0;
    area = rr.length * rr.breadth;
    return area;
}

int main(int argc, char const *argv[])
{
    /* code */
    Rectangle r;
    r.length = 25;
    r.breadth = 65;
    cout << "Area of Rectangle is " << area(r);
    return 0;
}
