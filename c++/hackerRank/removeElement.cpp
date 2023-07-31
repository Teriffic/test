#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int removeElement(vector<int>& arr, int val) {
        int n =arr.size();

        int i=0;
        
        int j =n-1;
        


        while(i<j){
            if(arr[i]!=val && arr[j]==val){
                 j--;
            }
            else if(arr[i]==val && arr[j] !=val){
                swap(arr[i],arr[j]);
                i++;
                j--;
                
            }


        }
    
    int c =0;
    
    for(int i=0;i<n;i++){
        if(arr[i]== val) break;
        c++;
    }    
    
    return c;

}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    
    int val = 2;
    int j = removeElement(arr,val);
    cout<<j;
}