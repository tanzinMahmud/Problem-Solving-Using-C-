#include <iostream>
using namespace std;

char stack[50];
int top = -1;

void push(char item){
    top++;
    stack[top] = item;
}

void pop(){
	if (top == -1){
		cout<<"Invalid Expression!"<<endl;
	}
	else{
		top--;
	}
}

void Top(){
	if (top == -1){
		cout<<"Valid Eexpression"<<endl;
	}
	else{
		cout<<"Invalid Expression!"<<endl;
	}
}

int main(){
	int i;
	char stc[50];
	cout<<"Enter the Expression:"<<endl;
	cin>>stc;
	for (i = 0; stc[i] != '\0'; i++){
		if (stc[i] == '(' || stc[i] == '{' || stc[i] == '['){
			push(stc[i]);
		}
		else if (stc[i] == ')' || stc[i] == '}' || stc[i] == ']'){
			pop();
		}
	}
	Top();
}
