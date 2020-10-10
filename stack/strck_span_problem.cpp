#include<bits/stdc++.h>
using namespace std;


// Normal Method
// Time complexity for this solution is O(n^2)
void calculateSpan(int stock[] , int n){
    int s[n];
    s[0] = 1;
    for(int i = 1 ; i<n ; i++){  
        s[i] = 1;
        for(int j = i-1 ; j>= 0 && (stock[i] >= stock[j]) ; j--){
            s[i]++;
        }
    }

    cout<<"Displaying span "<<endl;
    for (int i = 0 ; i< n ; i++){
        cout<<s[i]<<endl;
    }
}

// using stack Method
// Time complexity for this solution is O(n)

void calculateSpanStack(int stock[] , int n){
    stack<int> st;
    st.push(0);
    int s[n];
    s[0] = 1;
    for(int i = 1 ; i<n ; i++){
        s[i] = 1;
        while(!st.empty() && stock[st.top()] <= stock[i]){
            st.pop();
        }

        s[i] = (st.empty()) ? (i + 1) : (i - st.top());
        st.push(i);
    }

    cout<<"Displaying span "<<endl;
    for (int i = 0 ; i< n ; i++){
        cout<<s[i]<<endl;
    }

}

int main(){
    int price[] = { 10, 4, 5, 90, 120, 80 };
    int n = sizeof(price) / sizeof(price[0]); 
    // calculateSpan(price, n);
    calculateSpanStack(price , n);


}