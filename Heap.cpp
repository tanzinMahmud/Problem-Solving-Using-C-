#include<iostream>
#include<cstring>
using namespace std;

class DVD{
    char name[70];
    char category[70];
    int unitPrice;
    int stock;
    public:
    DVD(){
        strcpy(this->name,"");
        strcpy(this->category,"");
        this->unitPrice=0;
        this->stock=0;

    }
    DVD(char name[], char category[], int unitPrice, int stock){
        strcpy(this->name,name);
        strcpy(this->category,category);
        this->unitPrice=unitPrice;
        this->stock=stock;
    }

    DVD(const DVD* d){
        strcpy(this->name,d->name);
        strcpy(this->category,d->category);
        this->unitPrice=d->unitPrice;
        this->stock=d->stock;
    }

    void set()
    {

        strcpy(this->name,"DVD");
        strcpy(this->category,"Action");
        this->unitPrice=90;
        this->stock=200;

    }

    void print(){

        cout<<this->name<<" ********************"<<endl;
        cout<<"James Bond Collection: "<<endl;
        cout<<"Category: "<<this->category<<endl;
        cout<<"Price: "<<this->unitPrice<<" tk."<<endl;
        cout<<"Available: "<<this->stock<<" copies."<<endl;
        cout<<"Total Price: "<<getTotalPrice();
        cout<<" tk.";
        cout<<endl<<"************************"<<endl;;


    }

    double getTotalPrice()
    {

        double total;
        total=this->stock*this->unitPrice;
        return total;

    }

    ~DVD(){
        strcpy(this->name,name);
        strcpy(this->category,category);
        this->unitPrice=unitPrice;
        this->stock=stock;
    }
};

int main(){

    DVD* d1=new DVD;
    DVD* d2=new DVD("DVD","Action",90,200);
    DVD* d3=new DVD(d2);

    d1->set();

    d1->print();
    d2->print();
    d3->print();

    delete d1;
    delete d2;
    delete d3;

    return 0;
}
