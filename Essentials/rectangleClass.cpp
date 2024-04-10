#include <iostream>
using namespace std;

class Rectangle {
private:
  int length;
  int breadth;

public:
  // Constructor function for initialising the object of type Rectangle
  Rectangle(int l, int b) {
    length = l;
    breadth = b;
  }
  // area function for calculating the area of rectangle
  int area() { return length * breadth; }
  // function for calculating the perimeter of rectangle
  int perimeter() { return (2 * (length + breadth)); }
  // function for changing the lenght of rectangle
  void changeLength(int l) { length = l; }
  // function for changing the breadth of reactangle
  void changeBreadth(int b) { breadth = b; }
  // function for changing the length & breadth simultaneously
  void changeLB(int l, int b) {
    length = l;
    breadth = b;
  }
};

int main(int argc, char const *argv[]) {
  /* code */
  Rectangle r1(20, 30);
  int area = r1.area();
  cout << "Area of Rectangle = " << area << "\n";
  int perimeter = r1.perimeter();
  cout << "Perimeter of Rectangle = " << perimeter << '\n';
  r1.changeLB(45, 55);
  cout << "Area & Perimeter of Rectangle after changing the length and breadth"
       << '\n';
  cout << "Area = " << r1.area() << " & "
       << "Perimeter = " << r1.perimeter();
  return 0;
}
