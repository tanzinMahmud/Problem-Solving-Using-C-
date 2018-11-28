#include <iostream>
using namespace std;

class Person{
public:
    int id;
    string name;

    Person(int id, string name){
    this->id=id;
    this->name=name;
    }
};
int main(){

    Person p1[2]={{1, "AIUB"},{2, "Name"}};
    for(int i=0;i<2;i++){
        cout<<p1[i].id<<" "<<p1[i].name<<endl;
    }

}

