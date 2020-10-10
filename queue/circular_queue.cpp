#include<bits/stdc++.h>
using namespace std;

struct myqueue{
    int front = -1;
    int rear = -1;
    int size = 5;
    int arr[5];
}; 

bool isFull(struct myqueue *q) {
    if ((q->rear + 1) % q->size == q->front) {
      return true;
    }else{
    return false;
  }
}

bool isEmpty(struct myqueue *q){
    if (q->front == -1){
        return true;
    }
    return false;
}

void enqueue(struct myqueue *q , int val){
    if(isFull(q)){
        cout<<"Queue is full"<<endl;
    }else{
        if (q->front == -1){
        q->front +=1;
        }
        q->rear = (q->rear + 1) % q->size;
        q->arr[q->rear] = val;    
    }
}

void dequeue(struct myqueue *q){
    if(isEmpty(q)){
        cout<<"queue UnderFlow"<<endl;
    }else{
        if(q->front == q->rear){
            q->front = -1;
            q->rear = -1;
        }else{
        q->front = (q->front +1) % q->size;
        }
    }
}

void dispaly(struct myqueue *q){
    while (q->front <= q->rear){
        cout<<q->arr[q->front]<<" ";
        q->front+=1;
    }
}

int main(){
    struct myqueue *q = new struct myqueue;
    enqueue(q , 5);
    enqueue(q , 6);
    enqueue(q , 7);
    enqueue(q , 8);
    // dequeue(q);
    // enqueue(q , 9);
    // dequeue(q);
    enqueue(q , 20);
    dequeue(q);
    dequeue(q);
    // enqueue(qs , 30);
    dispaly(q);
}