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

int isEmpty(struct Node *top){
    if (top == NULL){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct Node *top){
    struct Node *p = new(struct Node);
    if (p == NULL){
        return 1;
    }else{
        return 0;
    }
}

struct Node *push(struct Node *top , int x){
    if (isFull(top)){
        cout<<"StackOverFlow";
    }else{
        struct Node *n = new (struct Node);
        n->data = x;
        n->next = top;  
        top = n;
        return top;
    }
}

int peek(struct Node* top){
    return top->data;
}

int buttom(struct Node* top){
    while(top->next != NULL){
        top = top ->next;
    }
    return top->data;
}

int pop(struct Node** top){
    if (isEmpty(*top)){
        cout<<"StackUnderFlow"<<endl;
    }else{
        struct Node* n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n); 
        return x;

    }
}

int element(struct Node* top , int pos){
    for(int i = 1 ; i <= pos+1 ; i++){
        top = top->next;
    }
    return top->data;
}

int main(){
   struct Node* top = NULL;
   top  = push(top , 5);
   top = push(top , 6);
   top = push(top , 7);
   int num = peek(top);
   int but = buttom(top);
   cout<<"Peek Element is : "<<num<<endl;
   cout<<"Buttom Element is : "<<but<<endl;
   Traversal(top);
}