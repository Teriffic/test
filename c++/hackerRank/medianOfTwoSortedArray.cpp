#include<iostream>
#include<vector>
using namespace std;

double merge(vector<int> &arr,vector<int> &brr,vector<int> &crr){
    int i=0;
    int j=0;
    int k=0;
    int n = arr.size();
    int m = brr.size();

    while(i<arr.size() && j<brr.size()){
        
        if(arr[i]<brr[j]){
             crr[k] = arr[i];
             i++;       
         }else{
             crr[k] = brr[j];
             j++;
         }
        k++;
    }

    if(i==arr.size()){
        while(j<brr.size()){
            crr[k++] = brr[j++]; 
        }
    }
     if(j==brr.size()){
        while(i<arr.size()){
            crr[k++] = arr[i++]; 
        }
    }
    cout<<k;
    double mid;

    if(m+n%2==0){
        double n1 = crr[k/2];
        double n2 = crr[k/2-1];
        mid = (n1+n2)/2;
    }else{
        mid = crr[k/2];
    }
    return mid;
    
}


int main(){
    int arr[]={2,3,4,5};
    int brr[] ={2,4,6,8};
    
    int n =sizeof(arr)/sizeof(int);
    int m =sizeof(brr)/sizeof(int);
    vector<int> a(arr,arr+n);
    vector<int> b(brr,brr+m);
    vector<int> crr(m+n);
    //cout<<m+n;
    cout<<merge(a,b,crr);
     //int p = max(m,n);
    for(int ele: crr) {
        cout<<ele<<" ";
    }
    
}