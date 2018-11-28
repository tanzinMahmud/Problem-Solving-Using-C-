#include <iostream>
using namespace std;
class Person{
    public:
        string name;
        string bloodGroup;

        Person(string name,string bloodGroup){

            this->name=name;
            this->bloodGroup=bloodGroup;
        }


    void show(){

    cout<<this->name<<endl;
    cout<<this->bloodGroup<<endl;

    }


};

class Tn:public Person{
    public:

        string dob;
        string cgpa;

        Tn(string dob,string cgpa,string name,string bloodgroup):Person(name,bloodGroup)
        {

            this->dob=dob;
            this->cgpa=cgpa;



        }

    void show(){

        cout<<this->name<<endl;
        cout<<this->bloodGroup<<endl;
        cout<<this->dob<<endl;
        cout<<this->cgpa<<endl;


    }


};
//
int main()
{
    Person p1("TN","1996");

    Tn t1("1998","4.00","TN M","O+");

    //p1.show();
    t1.show();


}
