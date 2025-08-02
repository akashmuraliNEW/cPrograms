#include <iostream>
using namespace std;
int arr[3] = {2,3,4};
void loopfunc() {
   for (int i = 0; i < 3; i++)
      {
         cout << i << "\n";
      }
   for (int j : arr){
      cout << j << "\n";
   }
}

int main (){
   loopfunc();
   
}