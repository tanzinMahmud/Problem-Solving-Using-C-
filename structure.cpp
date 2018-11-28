#include <iostream>
using namespace std;

struct student{
    string name;
    string id;
    float cgpa;
};

student getData(){
    student s1;
    cin>>s1.name;
    cin>>s1.id;
    cin>>s1.cgpa;
    return (s1);
}
int  main(){
    student s2;
    s2=getData();
    cout<<s2.name<<endl;
    cout<<s2.id<<endl;
    cout<<s2.cgpa<<endl;
}
