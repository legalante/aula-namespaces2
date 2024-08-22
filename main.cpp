#include <iostream>
using namespace std;

namespace coords1 {
  int x=1;
  int y=2;
}

namespace coords2 {
  int x=4;
  int y=5;
}

int main() { 
  using coords1::x;
  using coords2::y;
  int z = 7;
  cout << "x = " << x << endl << "y = " << y << endl << "z = " << z << endl;
}