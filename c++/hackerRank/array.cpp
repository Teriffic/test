#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int* a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    vector<int> v(n);
    int i ,j;
    
    for(i=0;i<n;i++) cin>>v[i];
    
    i=0;
    j=n-1;
    // cout<<i<<j;
    while(i<j){
        swap(&v[i],&v[j]);
        i++;
        j--;    
    }
        
    for(i=0;i<n;i++){
         cout<<v[i]<<" ";    
    }
    
    return 0;
}