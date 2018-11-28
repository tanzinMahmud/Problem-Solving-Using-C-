#include<iostream>
using namespace std;

int main()
{
    int highest,i,j;
    int a[6]={22,11,44,33,40,30};
    for(i=0;i<6-1;i++){
        for(j=i+1NSA;j<=5;j++){
            if(a[i]>a[j]){
                highest=a[i];
                a[i]=a[j];
                a[j]=highest;
            }
        }
    }
    for(i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
