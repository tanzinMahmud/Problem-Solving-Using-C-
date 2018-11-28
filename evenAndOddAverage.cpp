#include <iostream>
using namespace std;

int main(){
    int ara[5], evenCount=0, evenSum=0, oddCount=0, oddSum=0;
    for(int i=0;i<5;i++){
        cin>>ara[i];
        if(ara[i]%2==0){
            evenCount++;
            evenSum=evenSum+ara[i];
        }
        else{
            oddCount++;
            oddSum=oddSum+ara[i];
        }
    }
    cout<<"Even Average: "<<evenSum/evenCount<<endl;
    cout<<"Odd Average: "<<oddSum/oddCount<<endl;
}

