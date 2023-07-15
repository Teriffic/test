#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int inversion(vector<int> &a,vector<int> &b){
    int count =0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count += (a.size()-i);
            j++; 
        }else{
            i++;
        }

    }
    return count;

}
 
void merge(vector<int> &arr,vector<int> &brr,vector<int> &crr){
    int i=0;
    int j=0;
    int k=0;
    int n = arr.size();
    int m = brr.size();

    while(i<arr.size() && j<brr.size()){
        
        if(arr[i]<brr[j]){
             crr[k++] = arr[i++];       
         }else{
             crr[k++] = brr[j++];
         }
        
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
    
    
}

int mergeSort(vector<int>&v){
    int n = v.size();
    int count =0;
    if(n==1) return 0;

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
    count += mergeSort(a);
    count += mergeSort(b);
    //count the inversions

    //merging two sorted array
    count += inversion(a,b);
    merge(a,b,v);
    
    return count;

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

    
    
    cout<<endl;
    
    // for(int i =0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    cout<<mergeSort(v);
    
}