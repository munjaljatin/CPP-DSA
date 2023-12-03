#include <iostream>
using namespace std;

class Arithmetic
{
private:
    int val1;
    int val2;

public:
    // Default Constructor
    Arithmetic()
    {
        val1 = 0;
        val2 = 0;
    }
    Arithmetic(int a, int b); // parameterized Constructor
    int add();                // Facilitators => Performs addition operation
    int subtract();           // Facilitators => Performs subtraction operation
    int multiplication();     // Facilitators => Performs multiplication operation
    int division();           // Facilitators => Performs division operation
    int remainder();          // Facilitators => Performs remainder operation
    void showValues();
    void setValues(int a, int b); // mutator function
    ~Arithmetic();                // Destructor
};

// parameterized constructor
Arithmetic::Arithmetic(int a, int b)
{
    val1 = a;
    val2 = b;
}

// Definition of add function associated with Arithmetic class
int Arithmetic::add()
{
    return (val1 + val2);
}

// Definition of subtract function associated with Arithmetic class
int Arithmetic::subtract()
{
    return (val1 - val2);
}

// Definition of multification function associated with Arithmetic class
int Arithmetic::multiplication()
{
    return (val1 * val2);
}

// Definition of division function assciated with Arithmetic class
int Arithmetic::division()
{
    return (val1 / val2);
}

// Definition of reaminder function assciated with Arithmetic class
int Arithmetic::remainder()
{
    return (val1 % val2);
}

void Arithmetic::showValues()
{
    cout << val1 << " " << val2 << '\n';
}

void Arithmetic::setValues(int a, int b)
{
    val1 = a;
    val2 = b;
}

// Destructor Definition
Arithmetic::~Arithmetic() {}
int main(int argc, char const *argv[])
{
    /* code */
    Arithmetic a;
    cout << "Initail values are: ";
    a.showValues();
    a.setValues(45, 9);
    cout << a.add() << endl;
    cout << a.subtract() << endl;
    cout << a.multiplication() << endl;
    cout << a.division() << endl;
    cout << a.remainder() << endl;
    a.showValues();
    return 0;
}