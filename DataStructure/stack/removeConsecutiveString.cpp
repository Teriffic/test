#include<iostream>
#include<string>
#include<stack>

using namespace std;

void reverse(string &s){
    int i=0;
    int j = s.size()-1;
    while(i<j){
        swap(s[i++],s[j--]);
    }
    
}
string removeConsecutive(string s){
    stack<char>st;
    st.push(s[0]);

    for(int i=1;i<s.size();i++){
        if(st.top()!=s[i]) st.push(s[i]);    
    }
    s= "";
    while(st.size()!=0){
        s = s +st.top();
        st.pop(); 
    }
    reverse(s);
    return s;
}
int main(){

    string s = "aaabbcddaabffg";
    string t = removeConsecutive(s);
    for(int i=0;i<t.size();i++) cout<<t[i]<<" ";

}