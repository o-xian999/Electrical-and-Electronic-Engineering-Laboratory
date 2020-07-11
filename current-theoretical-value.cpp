#include <iostream>
#include <math.h>

using namespace std;

int main(void){
  double f;
  cin >> f;
  double I = 1/sqrt((pow(1000, 2) + pow(2 * 3.1415 * f * 0.1 - 1 / (2 * 3.1415 * f * 0.22 * pow(10, -6)), 2) ) );
  cout << I << endl;
}
