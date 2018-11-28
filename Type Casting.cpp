#include<iostream>
using namespace std;

class A{

    int x;
protected:
    int y;
public:
    int z;

};

class B: public  A{
};
class C: protected A{
};
class D: private A{
};

int main(){
    B b, C c, D d;

    A* a;
    a = &b;

}
