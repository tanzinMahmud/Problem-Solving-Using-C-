#include <iostream>
using namespace std;

int main(){
    int* a, b=10;
    a=&b;
    b=&a;
    cout<<*a<<endl;
}
