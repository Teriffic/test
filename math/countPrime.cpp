#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

bool isPrime(int n){

    if(n==1) return false;
    
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        } 
    }
    return true;

}

int main(){
    int n;
    cin>>n;
    vector<bool>sieve(n+1,1);

   
     for(int i=0;i<=n;i++){
        cout<<sieve[i];
    }

}