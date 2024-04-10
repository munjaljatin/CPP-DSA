#include <iostream>
using namespace std;

// Generic Template for class Arithmetic
template <class T> class Arithmetic {
private:
  T a;
  T b;

public:
  Arithmetic() {
    a = 0;
    b = 0;
  }
  Arithmetic(T a, T b);
  T add();
  T subtract();
  T multiplication();
};

template <class T> Arithmetic<T>::Arithmetic(T a, T b) {
  this->a = a;
  this->b = b;
}

template <class T> T Arithmetic<T>::add() { return (a + b); }
template <class T> T Arithmetic<T>::subtract() { return (a - b); }

template <class T> T Arithmetic<T>::multiplication() { return (a * b); }

int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
