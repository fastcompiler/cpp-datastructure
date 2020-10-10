#include<bits/stdc++.h>
using namespace std;

struct mystack{
    int top = -1;
    int arr[5];
};

struct mystack *s1 = new struct mystack;
struct mystack *s2 = new struct mystack;
int c = 0;

void push(struct mystack *ptr , int val){
    if(ptr->top == 4){
        cout<<"Stack OverFlow"<<endl;
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct mystack *ptr){
    int a = -1;
    if(ptr->top == -1){
        cout<<"Stack Undeflow"<<endl;
    }else{
        a = ptr->arr[ptr->top];
        ptr->top--;
    }
    return a;
}



void enQueue(int data){
    push(s1 , data);
    c++;
}

void deQueue(){
    int val = -1;
    int b = c-1;
    while(c--){
        val = pop(s1);
        push(s2 , val);
    }
    pop(s2);
    while(b--){
        val = pop(s2);
        push(s1 , val);
    }
}

void display(struct mystack *ptr){
    cout<<"Displaying Queue : ";
    while(ptr->top != -1){
        cout<<ptr->arr[ptr->top]<< " ";
        ptr->top--;
    }
}

int main(){
    enQueue(3);
    enQueue(4);
    enQueue(5);
    enQueue(6);
    enQueue(10);
    deQueue();
    deQueue();
    display(s1);
}