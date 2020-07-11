#include <iostream>
#include <math.h>

using namespace std;

int main(void){
  long double f;
  cin >> f;
  long double bit = atan(((2 * 3.1415 * f * 0.1) - 1 / (2 * 3.1415 * f * 0.22 * pow(10, -6))) / 1000);
  cout << bit * 180 / 3.1415 << endl;
}
