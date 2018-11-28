#include <iostream>
using namespace std;

struct TreeNode{
	int data;
	TreeNode *LeftNode;
	TreeNode *RightNode;
};

TreeNode *makeTreeNode(int value){
    TreeNode *newNode=new TreeNode;
    newNode->data=value;
    newNode->LeftNode=NULL;
    newNode->RightNode=NULL;
    return newNode;
}

TreeNode *insert(TreeNode *nodePtr, int item){
   	if(nodePtr==NULL){
        nodePtr=makeTreeNode(item);
   	}
   	else if(item<nodePtr->data){
        nodePtr->LeftNode=insert(nodePtr->LeftNode, item);
   	}
   	else if(item>nodePtr->data){
        nodePtr->RightNode=insert(nodePtr->RightNode, item);
   	}
    return nodePtr;
}

TreeNode *search(TreeNode *nodePtr, int target){
  	if(nodePtr!= NULL){
        if(target<nodePtr->data){
            nodePtr=search(nodePtr->LeftNode, target);
        }
        else if(target > nodePtr->data){
                nodePtr = search(nodePtr->RightNode, target);
        }
 	 }
  	return nodePtr;
}

void inorder(TreeNode *ptr){
    if(ptr!=NULL){
        inorder(ptr->LeftNode);
        cout<<ptr->data<<" ";
        inorder(ptr->RightNode);
    }
}

void postorder(TreeNode *ptr){
    if(ptr!=NULL){
        postorder(ptr->LeftNode);
        postorder(ptr->RightNode);
        cout<<ptr->data<<" ";
    }
}

void preorder(TreeNode *ptr){
    if (ptr!=NULL){
        cout << ptr->data << " ";
        preorder(ptr->LeftNode);
        preorder(ptr->RightNode);
    }
}

int main(){
    struct TreeNode *rootPtr=NULL;

    int n, item, i;
	cout<<"Enter number of Nodes: ";
   	cin>>n;

   	for(i=0; i<n; i++){
        cin>>item;
        rootPtr=insert(rootPtr, item);
    }

	inorder(rootPtr);
    cout<<endl<<"Enter target: ";
   	cin>>item;
   	TreeNode *ItemPtr=search(rootPtr, item);

   	if(ItemPtr==NULL){
        cout<<"Item was not found"<<endl;
   	}
   	else{
        cout<<"Item found"<<endl;
   	}
    return 0;
}