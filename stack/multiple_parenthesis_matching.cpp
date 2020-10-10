#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    char *bucket;
};


void push(struct stack *ptr , char val){
    if(ptr->top == ptr->size){
        cout<<"StackOverFlow"<<endl;
    }else{
        ptr->top++;
        ptr->bucket[ptr->top] = val;
    }
}

int u = 0;
int pop(struct stack* ptr){
    if (ptr->top == -1){
        return u++;
    }else{
        ptr->top--;
        return 0;
    }
}

int isEmpty(struct stack* ptr){
    if (ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    string s = "int pop(struct stack* ptr){if (ptr->top == -1){return u++;}else{ptr->top--;return 0;}}";

    struct stack* setter;
    setter->size = s.length();
    setter->top = -1;
    setter->bucket = new char[s.length()];

    for(int i = 0 ; i<s.length() ; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            push(setter , s[i]);
        }
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
            pop(setter);
        }
    }
    
if (isEmpty(setter) && pop(setter)<1){
    cout<<"Balanced Parenthesis";
}else{
    cout<<"Unbalanced Parenthesis";
}
}