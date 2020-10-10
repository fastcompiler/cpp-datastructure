#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void display(struct Node *ptr){
    while (ptr->next != NULL){
        cout<<ptr->data<<endl;
        ptr =  ptr->next;
    }
}



int main(){

    struct Node *head = new (struct Node);
    struct Node *first = new (struct Node);
    struct Node *second = new (struct Node);
    struct Node *third = new (struct Node);
    struct Node *forth = new (struct Node);
    struct Node *begg = new (struct Node);
    struct Node *middle = new (struct Node);
    struct Node *last = new (struct Node);

    head->data = 1;
    head->next = first;
    first->data = 12;
    first->next = second;
    second->data = 14;
    second->next = third;
    third->data = 16;
    third->next=forth;
    forth->data = 18;
    forth->next = NULL;


    //insert after node
    middle->data = 13;
    first->next = middle;
    middle->next = second;

    //Inserting at first
    begg->data = 1200;
    begg->next = head;


    //Inserting at last
    last->data = 200;
    forth->next = last;
    last->next = NULL;

    //deleting 12 from list is first in first node
    head->next = second;
    //Displaying
    display(begg);
}