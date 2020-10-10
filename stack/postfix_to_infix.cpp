#include <bits/stdc++.h> 
using namespace std; 

bool isOperand(char x) 
{ 
   return (x >= 'a' && x <= 'z') || 
          (x >= 'A' && x <= 'Z'); 
} 

string post_inf(string exp){
    stack<string> s;
    for (int i=0; exp[i]!='\0'; i++) 
    { 
        // Push operands 
        if (isOperand(exp[i])) 
        { 
           string op(1, exp[i]); 
           s.push(op); 
        } 
  
        // We assume that input is 
        // a valid postfix and expect 
        // an operator. 
        else
        { 
            string op1 = s.top(); 
            s.pop(); 
            string op2 = s.top(); 
            s.pop(); 
            s.push("(" + op2 + exp[i] + 
                   op1 + ")"); 
        } 
    } 
  
    // There must be a single element 
    // in stack now which is the required 
    // infix. 
    cout<< s.top(); 
} 


int main(){
    post_inf("ab+c-");
    // string op (1, 'd');
    // cout<<op;
}