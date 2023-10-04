#include<bits/stdc++.h>
using namespace std;
void Stack(){
    stack<int> st1,st2;
    st1.push(1);
    st1.push(7);
    st1.push(5);
    st1.push(9);
    st2.push(3);
    st2.push(2);
    st2.push(4);
    st2.push(1);
    st1.swap(st2);
    cout<<st1.top()<<endl;
    cout<<st2.top()<<endl;
    

    cout<<st1.top();
}
int main(){
    
    Stack();
}