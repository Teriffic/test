#include<iostream>
#include<string>

using namespace std;

class bike{
    public:
    int tyreSize;
    int engineSize;


    bike(int tyreSize, int engineSize){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        cout<<"constructor call hua :"<<tyreSize<<" "<<engineSize<<endl;
        
    }
    
    //destructor

    ~bike(){
        cout<<"destructor call hua";
    }



};

int main(){

    bike tvs(122,23);
    bike hero(12,43);
    bike THS(18,65);
    bool flag =true;

    if(flag==true){
        bike bmw(11,45);
        cout<<bmw.tyreSize<<bmw.engineSize;
    }
    cout<<"h"<<endl;
    
}