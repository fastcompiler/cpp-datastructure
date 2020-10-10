#include<iostream>
#include<stdio.h>
using namespace std;
template <class X>
X big(X a , X b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
using namespace std;
int main(){
    cout<<big(3,5);
}
