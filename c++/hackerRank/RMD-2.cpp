#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector <int>v ={1,2,1,1,3,2,2,3};
    int n =v.size();

    // for(int i=0;i<n;i++) cout<<v[i]<<endl;

    for(int i=0 ;i<n-1 ;i++){
        
        for(int j=i+1 ;j<n ;j++){
            
            if(v[i] != v[j]) cout<<j<<" ";
            v[i] = v[j];
        }
        
    }

}