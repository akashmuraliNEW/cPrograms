#include <iostream>
using namespace std;

int funcOverloading(int x, int y){
    return x+y;

}

double funcOverloading(double x , double y){
    return x*y;
}


int main(){
    cout << funcOverloading(2.0,3.0) << "\n";
    cout << funcOverloading(2,3);

}