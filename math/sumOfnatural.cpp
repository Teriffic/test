#include<iostream>
#include<cmath>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    if(n==0) return 0;
    else return n+sum(n-1);
    
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}