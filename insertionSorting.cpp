#include<iostream>
using namespace std;

int main(){
    int lowest,i,j;
    int a[6]={22,11,44,33,40,30};
    for(i=0;i<6;i++){
        j=i;
        while(j>0 && a[j]<a[j-1]){
                lowest=a[j];
                a[j]=a[j-1];
                a[j-1]=lowest;
                j--;
        }
    }
    for(i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
