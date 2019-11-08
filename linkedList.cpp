#include <iostream>

struct Node{
    int data;
    Node *next;
    Node(int value):data(value){
        next =NULL;
    }
};

class LinkedList
{

Node* head,*tail;
int length;

public:

LinkedList():head(NULL),length(0){}
~LinkedList(){} //Need to delete all nodes in the list.

void addNode(int value)
{
    Node *node=new Node(value);
    if(head==NULL)
    {
        tail= head = node;
        node->next=NULL;
        ++length;
    }
    else
    {
        node->next=head;
        head=node;
        ++length;
    }
    
}

void listInfo()
{
    std::cout<<"Length of the linked list is "<<length<<std::endl<<"head data is "<<head->data<<" Tail data is "<<tail->data;
}

};

int main()
{

LinkedList linkedList;

linkedList.addNode(10);
linkedList.addNode(15);
linkedList.addNode(20);
linkedList.addNode(25);
linkedList.listInfo();

}
