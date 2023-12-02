#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initializeRectangle(Rectangle *ptr, int length, int breadth)
{
    ptr->length = length;
    ptr->breadth = breadth;
}

int area(Rectangle r)
{
    return (r.length * r.breadth);
}

void changeLength(Rectangle *ptr, int length)
{
    ptr->length = length;
}

int main(int argc, char const *argv[])
{
    /* code */
    Rectangle r;
    int length;
    int breadth;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the breadth: ";
    cin >> breadth;
    initializeRectangle(&r, length, breadth);
    cout << "Area of Rectangle is " << area(r) << endl;
    changeLength(&r, 45);
    cout << "Area of Rectangle after changing the length " << area(r);
    return 0;
}
