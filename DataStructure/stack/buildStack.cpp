#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Stack{
public:
    int arr[5];
    int idx =-1;

    void push(int val){
        if(idx ==sizeof(arr)/sizeof(arr[0])){
            cout<<"stack is full";
            return;
        }
        idx++;
        arr[idx] =val;
    }
    
    void pop(){
        if(idx==-1){
           cout<<"stack is empty";
           return ; 
        } 
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"stack is empty";
            return -1;
        } 
        return arr[idx];
    }
    int size(){
        
        return idx+1;
    }
};

int main(){
    Stack st;
    st.pop();
    cout<<st.top();
}