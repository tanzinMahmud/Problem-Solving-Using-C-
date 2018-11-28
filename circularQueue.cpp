#include <iostream>
using namespace std;

struct queue{
    int queue[5];
    int front = 0;
    int rear = -1;
void push(int item){
    if(rear == 4){
        rear=0;
        queue[rear]=item;
    }
    else{
        rear++;
        queue[rear] = item;
    }
}
void pop(){
    if(front >=0){
        front++;
    }
}
void display(){
    for(; front<5; front++){
        cout<<queue[front]<<" ";
    }
    front=rear+1;
    rear=rear%rear;
    for(; rear<front; rear++){
        cout<<queue[rear]<<" ";
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
    q.pop();
    q.pop();
    q.pop();
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.display();
}
