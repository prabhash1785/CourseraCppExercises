// swap numbers
//
// created by Prabhash Rathore

#include <iostream>
using namespace std;

void swap_int_by_reference(int &, int &);

int main() {
  int a = 4, b = 10;
  cout << "a = " << a << " :: b = " << b << endl;

  swap_int_by_reference(a, b); // swap by reference

  cout << "a = " << a << " :: b = " << b << endl;
}

void swap_int_by_reference(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}
