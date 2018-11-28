#include<iostream>
using namespace std;

struct linkedList{
    int data;
    linkedList* pre;
    linkedList* next;
};

int main(){
    linkedList* head, *tail;
    int size;
    cout<<"Linked List Size: ";
    cin>>size;

    head=NULL;
    tail=NULL;

    linkedList* node=new linkedList;
    cout<<"Input Data:"<<endl;
    cin>>node->data;
    node->pre=NULL;
    node->next=NULL;
    head=node;
    tail=node;

    for(int i=1; i<size; i++){
        linkedList* pointer=head;
        node=new linkedList;
        cin>>node->data;
        node->next=NULL;
        node->pre=tail;
        tail=node;
        pointer->next=node;
        pointer=node;
    }
    node=head;
    cout<<"Data: ";
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}
