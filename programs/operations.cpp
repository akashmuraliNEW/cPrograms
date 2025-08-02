#include <iostream>
#include <cmath>
using namespace std;
int x=1, y=2;
void ifFunct(){
      if (x < y){
        cout << "True";

    }

}
  
int main(){
    int sum = x+y;
    int multy = x*y;
    cout << "sum of the number : " << sum << "\nmulty of nums : " << multy <<'\n';
    cout << sqrt(sum) << '\n';
    cout << max(x,y) << '\n';
    ifFunct();
    cout << "hey";
    return 0;

}