//2d array

/*#include <iostream>
using namespace std;
int main(){
    int ara[3][3], count=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ara[i][j]=++count;
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }
}*/
// 1d array

#include <iostream>
using namespace std;
int main(){
    int ara[3*3], row= 3, column= 3, count=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            ara[column*i+j]=++count;
            cout<<ara[column*i+j]<<" ";
        }
        //cout<<endl;
    }
}

