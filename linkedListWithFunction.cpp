#include<iostream>
using namespace std;

struct linkedList{
    int data;
    linkedList* nextNodeAddress;
};

linkedList* createNode(){
    linkedList* start=new linkedList;
    return start;
}
int getData(linkedList& Node2){
    cin>>Node2.data;
}
void createNextNode(){
    linkedList* Node=createNode();
    getData(Node);
}
