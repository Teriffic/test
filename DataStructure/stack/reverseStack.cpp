#include<iostream>
#include<stack>
using namespace std;

void displayRev(stack<int>&st){
    if(st.size()==0) return;
    
    int x =st.top();
    st.pop();
    displayRev(st);
    st.push(x);
    cout<<st.top()<<" ";
}

void display(stack<int>&st){
    if(st.size()==0) return;
    cout<<st.top()<<" ";
    int x =st.top();
    st.pop();
    display(st);
    st.push(x);
}

void pushAtBottom(stack<int>&st,int val){
    
    if(st.size()==0){
        st.push(val);
        return;
    } 
    
    int x =st.top();
    st.pop();
    pushAtBottom(st,val);
    
    st.push(x);


}

int main(){
    stack<int> st;
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    display(st);
    cout<<endl;
    displayRev(st);
    int val =-10;
    cout<<endl;
    pushAtBottom(st,val);
    display(st);
}