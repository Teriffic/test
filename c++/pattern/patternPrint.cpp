#include<iostream>
#include<string>

using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int a =i;
        for(int j=i;j<n;j++){
            cout<<"#";

        }

        for(int k =1;k<=i;k++){
            cout<<a;
            a++;
        }
        
        a = a-2;

        for(int q =1;q<i;q++){
            cout<<a;
            a--;
        }

        cout<<endl;
    }
    return 0;

}