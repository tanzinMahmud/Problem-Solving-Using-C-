#include <iostream>
using namespace std;

struct stack{
    int stack[8];
    int top = -1;

void push(int number){
    if(top >= 7){
        cout<<"STACK IS FULL!"<<endl;
    }
     else{
        top ++;
        stack[top] = number;
	}
}

void pop(){
    if(top <= 0){
        cout<<"STACK IS EMPTY!"<<endl;
    }
    else{
        top --;
	}
}

int Top(){
    return stack[top];
}
int isEmpty(){
    return (top < 0);
}

int isFull(){
    return (top >= 7);
}

void display(){
    for(; top >= 0; top --){
        cout<<stack[top]<<endl;
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
    cout<<st.Top()<<endl;
    cout<<st.isEmpty()<<endl;
    cout<<st.isFull()<<endl<<endl;
    st.display();
}

