#include <iostream>
using namespace std;

class One{

public:
    int a1;
    One(){
        cout<<"One"<<endl;

    }
};

class Two: virtual public One{
public:
    int a2;
    Two(){
        cout<<"Two"<<endl;
    }

};

class Three: virtual public One{
public:
    int a3;
    Three(){
        cout<<"Three"<<endl;

    }
};

class Four: public Three, public Two {
public:

    int a4;
    Four(){
        cout<<"Four"<<endl;
    }
};

int main(void){

    Four f;
    f.a1=10;
    cout<<f.a1<<endl;;

}


