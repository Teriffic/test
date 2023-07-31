#include<iostream>
#include<string>

using namespace std;

class bike{
    public:
    static int noOfBikes;

    int tyreSize;
    int engineSize;


    bike(int tyreSize, int engineSize){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        // cout<<"constructor call hua :"<<tyreSize<<" "<<engineSize<<endl;
        
    }
    
    //destructor


    void setNoOfBikes(int noOfBikes){
        this->noOfBikes = noOfBikes;
        noOfBikes++;
    }

};

void add(int a,int b){
    cout<<a+b;

}

void add(int a){
    cout<<a;
}


int main(){
    add(10,10);

}   