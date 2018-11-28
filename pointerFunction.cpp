#include <iostream>
using namespace std;
void swapa(int* a, int* b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int num1=6, num2=8;
    swapa(&num1, &num2);
    cout<<"Number 1:"<<num1<<endl;
    cout<<"Number 2:"<<num2<<endl;
}

