#include<bits/stdc++.h>

using namespace std;
int removeDuplicateElement(int arr[],int n){
     
    int idx=-1;
    int j =0;
    
    for(int i=0;i<n;i++){

        if(arr[i]!=arr[i+1]){
            
            arr[j++] =arr[i];
            

        }        
        
    }    
    

    return j;
     
}

int main(){
    
    int arr[] ={1,1,2,2};
    
    

    int n = sizeof(arr)/4;
    
    sort(arr,arr+n);
    
    
    n= removeDuplicateElement(arr,n);
    
    
    for(int i=0;i<n;i++)cout<<arr[i]<<endl;

}