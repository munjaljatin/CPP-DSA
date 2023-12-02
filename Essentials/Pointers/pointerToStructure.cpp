#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main(int argc, char const *argv[])
{
    /* code */
    Rectangle r1;
    r1.length = 20;
    r1.breadth = 40;

    Rectangle *ptr;
    ptr = &r1; // Now, the ptr variable points to r1 variable of type Rectangle

    // To acces the memeber of a structure using the pointers we can use the following syntax
    // Using the dot(.) operator, the syntax is :-
    // 1. (*ptr).length = 15; (*ptr).breadth = 30;
    // Using the arrow operator(->), the syntax is :-
    // 2. ptr->length = 15; ptr->breadth

    ptr->length = 10;
    ptr->breadth = 20;
    cout << "Area of Rectangle is " << (ptr->length) * (ptr->breadth);

    // creating a structure variable in the heap
    Rectangle *ptr1;
    ptr1 = (struct Rectangle *)malloc(sizeof(Rectangle));

    ptr1->length = 35;
    ptr->breadth = 45;
    cout << endl;
    cout << "Area of Rectangle created in the heap is " << (ptr1->length) * (ptr->breadth);
    return 0;
}
