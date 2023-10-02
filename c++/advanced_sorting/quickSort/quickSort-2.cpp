#include<iostream>
using namespace std;

int part(int arr[],int si,int ei){
    int count =0;
    int pivotEle = arr[si];

    for(int i=si+1;i<=ei;i++){
        if(pivotEle>=arr[i]) count++;
    }

    int pivotIdx = count+si;

    swap(arr[si],arr[pivotIdx]);  
    
    int i =si;
    int j =ei;
    while(i<j){
        if(arr[i]<=pivotEle)i++;
        if(arr[j]>pivotEle) j--;
        else if(arr[i]>pivotEle && arr[j]<=pivotEle){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    
    return pivotIdx;
    
}

void quickSort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi = part(arr,si,ei);

    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);

}

int main(){

    int arr[] ={5,1,8,2,7,6,3,4};
    int n =sizeof(arr)/4;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    quickSort(arr,0,n-1);
    cout<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}