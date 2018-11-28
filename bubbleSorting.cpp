#include<iostream>
using namespace std;

int main()
{
    int highest,i,j;
    int a[6]={22,11,44,33,40,30};
    for(i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++){
            if(a[j]>a[j+1]){
                highest = a[j];
                a[j] = a[j+1];
                a[j+1] = highest;
            }
        }
    }
    for(i=0;i<6;i++)
    {
        cout<<a[i]<<" ";

    }
    return 0;
}
