#include <iostream>
using namespace std;
int main(){
    int ara1[3][3]={{1, 2, 3},
                    {6, 7, 8},
                    {11, 12, 13}},
        ara2[3][3]={{16, 17, 18},
                    {21, 22, 23},
                    {26, 27, 28}};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<ara1[i][j] + ara2[j][i]<<" ";
        }
        cout<<endl;
    }
}

