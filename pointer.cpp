#include <iostream>
using namespace std;

int main(){
    int* a, b=10;
    cout<<&a<<endl;
    a = &b;
    cout<<a<<endl;
    cout<<&b<<endl;
    int y=*a;
    cout<<&y;
    cout<<endl;

    int ara[5]={12, 23, 45, 56, 67};
    cout<<*ara<<endl;
    cout<<*(ara+1)<<endl;
    cout<<endl;
    int *p;
    p=ara;
    for(int i=0; i<5; i++,p++){
        cout<<i+1<<"th Element is : "<<*p<<endl;
    }
}
