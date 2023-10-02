#include<iostream>
#include<stack>
using namespace std;
void pushAtIndex(stack<int>&st,int idx,int val){
    stack<int>temp;

    while(st.size()>idx){
        temp.push(st.top());
        st.pop();

    }
    temp.push(val);

    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }

}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int idx ,val;
    cin>>idx>>val;
    pushAtIndex(st,idx,val);    
    
    while(st.size()>0){
        cout<<st.top();
        st.pop();
    }
    
}