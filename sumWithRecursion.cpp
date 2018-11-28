#include<iostream>
using namespace std;

int sum(int num){
    if(num==0){
        return 0;
    }
    else{
        return num%10+sum(num/10);
    }
}
int main(){
    int num;
    cout<<"Enter a Five Digit Integer:";
    cin>>num;
    cout<<"Sum of the Integer:"<<sum(num);
}
