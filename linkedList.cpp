// Example program
#include <iostream>
#include <string>
#include<array>
#include<vector>



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
~LinkedList(){
    Node *iterator=head;
    while(iterator!=NULL)
    {
        head= head->next;
        delete iterator;
        iterator= head;
    }
    } //Need to delete all nodes in the list.

void insert(int value)
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
    std::cout<<"Length of the linked list is "<<length<<std::endl<<"head data is "<<head->data<<" Tail data is "<<tail->data<<std::endl;
}

void print()
{
    int i=1;
    Node *iterator=head;
    std::cout<<"list length = "<<length<<std::endl;
    while(iterator!=NULL)
    {
        std::cout<<"value at node "<<i<<"  = "<<iterator->data;
        iterator= iterator->next;
        ++i;
    }
}

void deleteAll()
{
    Node *iterator=head;
        while(iterator!=NULL)
    {
        head= head->next;
        delete iterator;
        iterator= head;
        --length;
    }
}


void deleteNode(int deleteCount=1)
{
    Node *iterator=head;
        while(iterator!=NULL && deleteCount>0)
    {
        head= head->next;
        delete iterator;
        iterator= head;
        --length;
        --deleteCount;
    }
}


};

int main()
{

LinkedList linkedList;

linkedList.insert(10);
linkedList.insert(15);
linkedList.insert(20);
linkedList.insert(25);
linkedList.print();
linkedList.deleteNode(2);
std::cout<<std::endl<<"after delete: "<<std::endl;
linkedList.print();

}
