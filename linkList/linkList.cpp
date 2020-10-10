#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void Traversal(struct Node *ptr){
    while (ptr != NULL)
    { 
       cout<<ptr->data<<endl;
       ptr = ptr->next;
    }
    
}

int main(){
    struct Node *head , *first;
    head = new (struct Node);
    first = new (struct Node);
    head->data = 10;
    head->next = first;
    first->data = 12;
    first->next = NULL;
    Traversal(head);
    
}