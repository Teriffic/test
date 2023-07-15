#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,vector<int> &brr,vector<int> &crr){
    int i=0;
    int j=0;
    int k=0;
    int n = arr.size();
    int m = brr.size();

    while(i< arr.size() && j< brr.size()){
         
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
        while(i<n){
            crr[k++] = arr[i++]; 
        }
     }

    
}

void mergeSort(vector<int>&v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n- n/2;
    vector<int> a(n1),b(n2);
    
    for(int i=0;i<n1;i++){
        a[i] =v[i];
    }
    
    for(int i=0;i<n2;i++){

        b[i] = v[i+n1]; 
    }

    //magic or we can say recursion
    mergeSort(a);
    mergeSort(b);
    //merge
    merge(a,b,v);
    
    a.clear();
    b.clear();

}

int main(){
    int n;
    cin>>n;


    vector<int> v(n); // same as arr ,copy

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 
    cout<<endl;

    mergeSort(v);
    
    cout<<endl;
    
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    
}