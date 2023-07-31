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
};

int main(){

    bike tvs(122,23);
    bike hero(12,43);
    bike THS(18,65);

    
}