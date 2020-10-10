#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next =  NULL;
};

struct Queue { 
    struct Node *front, *rear; 
    Queue() 
    { 
        front = rear = NULL; 
    } 

    void enQueue(int x){
        struct Node *n = new struct Node;
        n->data = x;
        n->next = NULL;
        if(rear == NULL){
            front = rear = n;
        }
        rear->next = n;
        rear = n;
        n->next = NULL;
    }

    void display(){
        cout<<"Displaying Queue :  ";
        while(front->next != NULL){
            cout<<front->data<<"  ";
            front = front->next;
        }
        cout<<front->data;
    }
};

  


int main(){

    struct Queue q;
    q.enQueue(4);
    q.display();

}