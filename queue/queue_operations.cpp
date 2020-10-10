#include<bits/stdc++.h>
using namespace std;

struct myqueue{
    int rear;
    int front;
    int size;
    int *arr;
};

void enque(struct myqueue *q , int val){
    if (q->rear == -1 && q->rear == -1){
        q->front = q->front + 1;
        q->rear = q->rear + 1;
        q->arr[q->rear] = val;
    }
    else if(q->rear == q->size){
        cout<<"queue overflow"<<endl;
    }
    else{
        q->rear +=1;
        q->arr[q->rear] = val;
    }
}

void denque(struct myqueue *q){
    if(q->front > q->rear){
        cout<<"Queue UnderFlow"<<endl;
    }
    else{
        q->front +=1;
    }
}

int last(struct myqueue *q){
    return q->arr[q->rear];
}

int peek(struct myqueue *q){
    return q->arr[q->front];
}

void dispaly(struct myqueue *q){
    while (q->front <= q->rear){
        cout<<q->arr[q->front]<<" ";
        q->front+=1;
    }
}
int main(){
    struct myqueue *q = new struct myqueue;
    q->front = -1;
    q->rear = -1;
    q->size = 10;
    q->arr = new int[10];
    enque(q , 4);
    enque(q , 5);
    enque(q , 6);
    enque(q , 7);
    enque(q , 8);
    denque(q);
    denque(q);
    denque(q);
    enque(q, 10);
    cout<<endl<<peek(q)<<endl;
    cout<<last(q)<<endl;
    dispaly(q);
}