#include <iostream>
using namespace std;

void twiceArray(int expectedArray[], int arrayLength){
    for(int i=0; i<arrayLength; i++){
        expectedArray[i]*=2;
    }
}
void printArray(int expectedArray[], int arrayLength){
    for(int i=0; i<arrayLength; i++){
        cout<<expectedArray[i]<<endl;
    }
}
int main(){
    int firstArray[]={1, 2, 3};
    int secondArray[]={6, 7, 8, 9, 10};
    printArray(firstArray,3);
    cout<<endl;
    twiceArray(firstArray,3);
    cout<<endl;
    printArray(firstArray,3);
    cout<<endl;
    printArray(secondArray,5);
}

