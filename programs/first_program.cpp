#include <iostream>
using namespace std;
int a = 50,b=40,c=10;
int x;


void func() {
  cout << "Hello World!" << '\n';
  cin >> x;
}
int main () {
  func();
  
  cout << "sum of numbers : " <<  a + b + c << '\n' << "input number is " << x ;
  return 0;
}