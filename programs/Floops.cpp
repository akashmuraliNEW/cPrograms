#include <iostream>
using namespace std;
int arr[3] = {5,3,4};
void loopfunc() {
   for (int i = 0; i < 3; i++)
      {
         cout << i << "\n";
      }
   for (int j : arr){
      cout << j << "\n";
   }
}

void patterN(){
   for (int k = 1; k < 5; k++){
      for (int p = 1; p<=k; p++){
         cout << p << " "; 
      
      } 
      cout << "\n";
   }
}

int main (){
   // loopfunc();
   patterN();
}