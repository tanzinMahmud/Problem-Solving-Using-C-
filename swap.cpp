#include <iostream>
using namespace std;
void printArray(int ara[], int size){
    for(int i=0; i<size; i++){
        //ara[i]=ara[i]*2;
        ara[i]*=2;
    }
}

int  main(){
    int ara[6]={1,2,3,4,5,6};
    printArray(ara, 6);
    for(int i=0; i<6; i++){
        cout<<ara[i]<<endl;
    }
}
