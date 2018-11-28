#include <iostream>
using namespace std;

int main(){
    int ara[]={1,2,3,4,5,6,7};
    int start=0, end=6, target;
    int mid=0;
    mid=(start+end)/2;
    cin>>target;
    while(start<=end && ara[mid]!=target){
        if(target>ara[mid]){
            start=mid+1;
        }
        else if(target<ara[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    if(ara[mid]==target){
        cout<<"Found at Location: "<<mid<<endl;
    }
    else{
        cout<<"Not Found!"<<endl;
    }
}
