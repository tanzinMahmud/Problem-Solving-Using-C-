#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int ara[4]={7,3,1,10};

    sort(ara, ara+3);

    for(int i=0;i<4;i++){

        cout<<ara[i]<<endl;
    }
    return 0;
}
