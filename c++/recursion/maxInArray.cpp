#include<iostream>
#include<climits>
using namespace std;

void max(int arr[],int n ,int i,int mx){
    if(i==n){
        cout<<"maximum value is "<<mx;
        return;
    }
    if(arr[i]>mx) mx = arr[i];
    max(arr,n,i+1,mx);
}

int maxInArray(int arr[],int n, int i){
    if(i==n) return INT8_MIN;;
    return max(arr[i],maxInArray(arr,n,i+1));

}

int main(){
    int arr[6];
    int n = sizeof(arr)/4;
    
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    //max(arr,n,0,INT8_MIN);
    cout<<maxInArray(arr,n,0);
}