#include <iostream>
using namespace std;

int count=0,size;

struct linkedList{
    int data;
    linkedList* address;
};

struct stack{
    linkedList* start= new linkedList;
    linkedList* node=start;
    node->address=NULL;

void push(int number){
    if(count>=size){
        cout<<"STACK IS FULL!"<<endl;
    }
    else{
        node->data=number;
        node->address=new linkedList;
        node=node->address;
        node->address=NULL;
        count++;
	}
}

void pop(){
    if(node== NULL){
        cout<<"STACK IS EMPTY!"<<endl;
    }
    else{
        node->address=NULL;
        count--;
	}
  }
}

};

int main(){
    stack st;
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(10);
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.pop();

    st.display();
}

