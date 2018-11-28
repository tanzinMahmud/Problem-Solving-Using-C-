#include <iostream>
using namespace std;

template<class T>
class Data{

    T x;
public:

    Data(T x){
        this->x=x;

    }

    void print(){
        cout<<this->x<<endl;

    }
};

class Person{

    int id;
    string name;

public:
    Person(int id, string name){
        this->id=id;
        this->name=name;

    }

};
int main(){
    Data<int>d1(10);
    d1.print();

    Data<double>d2(10.50);
    d2.print();


    Data<string>d3("AIUB");
    d3.print();

    Person p(1, "AIUB");
    Data<Person>d4(p);
    d4.print();


}
