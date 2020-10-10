#include<bits/stdc++.h>
#define N 10
using namespace std;
int arr[N];
int front = -1;
int rear = -1;

int isFull(){
    if (rear == N-1){return 1;}
    return 0;
}

int isEmpty(){
    if (front == -1){
        return 1;
    }else{
        return 0;
    }
}

void Enqueue(char c , int val){
    if (c == 'r'){
        if (isFull()){
            cout<<"Queue is full"<<endl;
        }else if(front == -1){
            front = rear = 0;
            arr[rear] = val;
        }else{
            rear++;
            arr[rear] = val;
        }
    }else if(c == 'f'){
        if (front == 0){
            cout<<"No space in the front"<<endl;
        }else{
            front--;
            arr[front] = val;
        }
    }
}

void Dequeue(char c){
    if ( c== 'r'){
        if (isEmpty()){
            cout<<"Queue is Empty "<<endl;
        }else{
            rear--;
        }
    }else if(c == 'f'){
        front++;
    }
}

void display(){
    cout<<"Displaying DEqueue : ";
    int n = rear;
    while(n >= front){
        cout<<arr[n]<<"  ";
        n--;
    }
}
int main(){
    Enqueue('r' , 4);
    Enqueue('r' , 5);
    Enqueue('r' , 6);
    Enqueue('r' , 10);
    Enqueue('r' , 20);
    Enqueue('r' , 30);
    Enqueue('r' , 40);
    Dequeue('r');
    Enqueue('r' , 50);
    Dequeue('f');
    Enqueue('f' , 100);
    display();
}