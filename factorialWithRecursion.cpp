#include<iostream>
using namespace std;
int factorial(int num){
    if(num==0){
        return 1;
    }
    else{
        return (num*factorial(num-1));
    }
}
int main(){
    int num;
    cout<<"Give an Interger:";
    cin>>num;
    cout<<"Factorial is:"<<factorial(num);
}
