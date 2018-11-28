#include <iostream>
using namespace std;

int main(void){
    int size;
    cout<<"Enter Array Size: ";
    cin>>size;
    int ara[size];
    for(int i=1; i<=size; i++){
        cin>>ara[i];
    }
    cout<<endl;
    for(int i=size; i>0; i--){
        cout<<ara[i]<<endl;
    }
}
