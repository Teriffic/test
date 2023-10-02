#include<iostream>
using namespace std;

    int findDigits(int n) {
        int count =0,rem;
        int num =n;
        if(n<10) return 0;
        while(n>0){
            
            rem = n % 10;
            if(rem==0){
                n /= 10;
                continue;    
            }
            if(num % rem ==0){
                count++;
            } 
            n /= 10;
            
        }
        return count;
        
    }
int main(){
    cout<<findDigits(1012);

}