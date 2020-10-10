#include<iostream>
using namespace std;
#define N 5

int stack[N];
int top = -1;

void push(int a){
    if (top == N-1){
        cout<<"StackOverFlow"<<endl;
    }else{
        top++;
        stack[top] = a;
    }
}

void display(){
    cout<<"Displaying stack "<<endl;
    for(int i = top; i >=0 ; i--){
        cout<<stack[i]<<endl;
    }
}

void pop(){
    if (top == -1){
        cout<<"StackUnderFlow"<<endl;
    }else{
        top--;
    }
}
void peek(){
    if (top ==-1){
        cout<<"Stack is Empty"<<endl;
    }else{
        cout<<"peek value is : "<<stack[top]<<endl;
    }
}

int main(){
    
    push(2);
    push(3);
    push(5);
    display();
    peek();

}