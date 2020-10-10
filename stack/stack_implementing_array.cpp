#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int * arr;
};

void push(struct stack* ptr , int val){
    if (ptr->top == ptr->size-1){
        cout<<"Stack over flow"<<endl;
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        cout<<"Push sucessfully";
    }
}

void display(struct stack* ptr){
    if(ptr->top == -1){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Displaying Stack "<<endl;
        for(int i = ptr->top ; i>=0 ; i--){
            cout<<ptr->arr[i]<<endl;
        }
    }
}

int main(){
    cout<<"Working";
    struct stack *s;
    s->size = 5;
    s->top = -1;
    s->arr = new int[s->size];
    push(s , 5);
    display(s);
    
    return 0;
}