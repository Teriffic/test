#include<iostream>
#include<cmath>
using namespace std;
void displayFactor(int n){
    
    
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            
        } 
    }

    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0 && i!=sqrt(n)){
            cout<<n/i<<" ";

            
        } 
    }
    
}

int main(){
    int n;
    cin>>n;
    displayFactor(n);
}