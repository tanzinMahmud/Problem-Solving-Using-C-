#include <iostream>
using namespace std;

int  main(){
    int ara[6]={1,2,3,4,5,6};
    int* p;
    p=ara;
    cout<<*p+1<<endl;
    cout<<*(p+2)<<endl;
    for(int i=0; i<6; i++, p++){
        cout<<*p<<" ";
    }
}
