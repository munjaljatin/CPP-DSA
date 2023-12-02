#include <iostream>
using namespace std;

// Structure of Rectangle
struct Rectangle
{
    // Members of Rectangle
    int length;
    int breadth;
};

// Structure of complex number
struct complexNumber
{
    int real;
    int imaginary;
};

// Structure for a Student
struct Student
{
    char name[20];
    int rollNumber;
    char department[20];
    char address[50];
    int phoneNumber;
};

// Structure for Playing Card
struct Card
{
    int face;
    int shape;
    int color;
};

int main(int argc, char const *argv[])
{
    /* code */
    // declaration of r variable of type Rectangle
    Rectangle r;
    // declaration + initailisation of r1 variable of type Rectangle
    Rectangle r1 = {10, 20};
    // .(dot) operator is used for accessing the member of variable r

    r1.length = 20;
    r1.breadth = 30;

    Student student1;
    // student1.name = {'J'};
    // student1.department = "Computer Science";
    // student1.rollNumber = 40;
    // student1.address = "Tohana";

    Card deck[52] = {{1, 0, 0}, {2, 0, 0}, {2, 1, 0}};
    cout << deck[0].face << " " << deck[0].shape << " " << deck[0].color;

    cout << endl
         << sizeof(deck[0]);

    return 0;
}
