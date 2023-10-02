#include<iostream>
#include<cmath>
using namespace std;

int countPrimes(int n){
           
        if(n<=2) return 0;
        
        int count =1;
        
        for(int i=3;i<n; i=i+2){
            bool flag =false;

            for(int j=3;j<10&&j<i;j=j+2){
                if(i%j==0){
                    flag = true;
                    break;
                } 
            }

            if(flag==false) count++;
        
        }

        return count;

}

int main(){

    int n;
    cin>>n;
    int num = countPrimes(n);
    cout<<num;
    
    
    
}