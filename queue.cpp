#include <iostream>
using namespace std;

struct queue{
    int queue[5];
    int rear=-1;
    int front=0;
void push(int item){
    if(rear==4){
        cout<<"Queue is Full!"<<endl;
    }
    else{
        rear++;
        queue[rear]=item;
    }
}
void pop(){
    if(front<0){
        cout<<"Queue is Empty!"<<endl;
    }
    else{
        front++;
    }
}
void display(){
    for(; front<=rear; front++){
        cout<<queue[front]<<" ";
    }
}

};

int main(){
    queue q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    q.pop();

    q.display();
}
