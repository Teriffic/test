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

int bike::noOfBikes = 15;
int main(){

    bike tvs(122,23);
    tvs.setNoOfBikes(15);    
    bike hero(12,43);
    

    cout<<tvs.noOfBikes<<hero.noOfBikes;
 

}   