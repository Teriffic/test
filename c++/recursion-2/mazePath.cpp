#include<iostream>
using namespace std;
int maze(int sr,int sc, int er, int ec){
    if(sr>er) return 0;
    if(sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rW = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    int totalWays =  rW +  downWays;
    
    return totalWays;

}
int maze2(int sr,int sc){
    if(sr<0) return 0;
    if(sc<0) return 0;
    if(sr==0 && sc==0) return 1;
    int rW = maze2(sr,sc-1);
    int downWays = maze2(sr-1,sc);
    int totalWays =  rW +  downWays;
    
    return totalWays;

}

void printPath(int sr,int sc, int er, int ec, string s){
    if(sr>er) return ;
    if(sc>ec) return ;
    if(sr==er && sc==ec){
        cout<<s<<" ";
    }
    
    printPath(sr,sc+1,er,ec,s+'R');
    printPath(sr+1,sc,er,ec,s+'D');
    
 
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<maze(0,0,a,b);
    printPath(0,0,a,b,"");
    cout<<maze2(a,b);
}