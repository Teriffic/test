#include<iostream>
#include<stack>
using namespace std;


int main(){
    int arr[]= {3,1,2,7,4,6,2,3};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    int brr[n];

    stack<int>st;
    
    brr[n-1]= -1;
    st.push(arr[n-1]);

    for(int i=n-2;i>=0;i--){

        while(st.size()>0 && st.top()<=arr[i]) st.pop();

        if(st.empty())brr[i] =-1;
        else brr[i] =st.top();

        st.push(arr[i]);
    }
    for(int i=0;i<n;i++) cout<<brr[i]<<" ";

}