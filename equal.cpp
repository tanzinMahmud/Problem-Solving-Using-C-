#include<iostream>
using namespace std;

class Integer{
    int data1;
public:
     int operator=(int data){
        this->data1=data;

     }
    bool operator==(int data){
         if(this->data1==data){

            return true;
                cout<<"True"<<endl;
         }
         else{
            return false;
                cout<<"False"<<endl;
         }
    }
};

int main(){

    Integer i1;
    i1 = 5;
    i1 == 6;
    /*if(i1==7){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    */
    return 0;
}
