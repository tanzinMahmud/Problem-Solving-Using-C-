#include <iostream>
#include <list>
using namespace std;


int main(){
    list<int> l;

    l.push_back(10);
    l.push_back(30);
    l.push_back(50);
    l.push_front(100);

    l.insert(--l.end() , 200);

    list<int>::iterator i = l.begin();
    while(i!=l.end()){
            cout<<*i<<endl;
            i++;


    }

}
