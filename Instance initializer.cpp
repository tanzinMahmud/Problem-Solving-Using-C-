#include <iostream>
using namespace std;

class Ini {
public:
    int a;
    int b;

    Ini():a(10),b(20){


    }

    Ini(int a,int b):a(a),b(b){



    }

    void show()

    {
        cout<<this->a<<endl;
        cout<<this->b<<endl;
        cout<<endl;

    }
};

int main()
{
    Ini *c,*d;
    c=new Ini();
    d=new Ini(30,50);
    c->show();
    d->show();

    delete c;
    delete d;
}
