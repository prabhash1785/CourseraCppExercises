// swap numbers
//
// created by Prabhash Rathore

#include <iostream>
using namespace std;

void swap_int_by_reference(int &, int &);

template <typename T>
void swap_items(T &, T &);

class Point {
  private:
    int x, y;

  public:
    Point():x(0),y(0) {};
    Point(int x, int y): x(x), y(y) {};
    //ostream &operator<<(ostream &out, const Point &point) {
      //out << "(" << point.x << ", " << point.y << ")" << endl;
      //return out;
    //}
    void print() {
       cout << "(" << this-> x << ", " << this->y << ")" << endl;
    }
};

int main() {
  int a = 4, b = 10;
  cout << "a = " << a << " :: b = " << b << endl;
  swap_int_by_reference(a, b); // swap by reference
  cout << "a = " << a << " :: b = " << b << endl;

  // test case for generic swap method
  int m = 5, n = 10;
  swap_items(m, n);
  cout << "m = " << m << " :: n = " << n << endl; 
  
  string s = "foo", t = "bar";
  swap_items(s, t);
  cout << "s = " << s << " :: t = " << t << endl; 

  // object swap
  Point p1(10, 20);
  Point p2(50, 100);
  swap_items(p1, p2);
  cout << "p1 = ";
  p1.print();
  cout << "p2 = ";
  p2.print();
  cout << endl;
}

void swap_int_by_reference(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

template <typename T>
void swap_items(T &x, T &y) {
  T temp = x;
  x = y;
  y = temp;
}
