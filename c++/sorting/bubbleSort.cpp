#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void swap(int *a,int *b){
    int temp =*a;
    *a = *b;
    *b = temp;

}

int main(){
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"array is:"<<endl;
    
    for(int i =0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1]){
                swap(&ar[j],&ar[j+1]);
                flag =false;
            }
        }
        if(flag ==true) break;
    }
    cout<<endl<<"array after sorting"<<endl;
    for(int i =0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    

}