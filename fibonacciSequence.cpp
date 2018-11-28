#include<iostream>
using namespace std;

void fibonacci(int num1, int num2){
    static int i=1;
    int fibo;
    if (i==25){
        cout<<endl;
    }
    else{
        fibo=num1+num2;
        num1=num2;
        num2=fibo;
        cout<<endl<<fibo;
        i++;
        fibonacci(num1,num2);
    }
}

int main(){
    static int num1=0, num2=1;
    int fibonacci (int num1, int num2);
    cout<<"Fibonacci Series of First 25 Numbers:"<<endl;
    cout<<"1 ";
    fibonacci(num1,num2);
}
