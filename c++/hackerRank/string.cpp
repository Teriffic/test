#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s, t;
    cin>>s;
    cin>>t;
    
    int n = s.size();
    int m = t.size();
    string h;
    h = s+t;
    char a;
    a = s[0];
    s[0] = t[0];
    t[0] = a;
    
    cout<<n<<" "<<m<<endl;
    cout<<h<<endl;
    cout<<s<<" "<<t;
    return 0;
}
