// Example program
#include <iostream>
#include <string>

struct node{
int data;
node *left,*right;
node(int value):data(value){
left=NULL;
right=NULL;
}
};

void inOrder(node *entryNode)
{
    if (entryNode==NULL)
        return;
    inOrder(entryNode->left);
    std::cout<<entryNode->data<<" ";
    inOrder(entryNode->right);
}
void preOrder(node *entryNode)
{
    if (entryNode==NULL)
        return;
    std::cout<<entryNode->data<<" ";
    preOrder(entryNode->left);
    preOrder(entryNode->right);
    
}

void postOrder(node *entryNode)
{
    if (entryNode==NULL)
        return;
    postOrder(entryNode->left);
    postOrder(entryNode->right);
    std::cout<<entryNode->data<<" ";
}


int main()
{
node* root=new node(7);
root->left= new node(4);
root->left->left = new node(3);
root->left->right = new node(5);
root->right= new node(12);
root->right->right = new node(15);

inOrder(root);
std::cout<<std::endl;
preOrder(root);
std::cout<<std::endl;
postOrder(root);
}
