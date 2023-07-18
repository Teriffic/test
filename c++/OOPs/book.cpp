#include<iostream>
#include<string>

using namespace std;

class book{
    public:

    char name;
    int price;
    int numberOfPages;

    int countBooks(int p){
        if(price<p) return 1;
        else return 0;

    }

    int isBookPresent( char book){
        if(name == book) return true;
        else return false; 
    }

};

int main(){

    book harryPotter;
    harryPotter.name = 'h';
    harryPotter.price = 100;
    harryPotter.numberOfPages = 500;
    
    cout<<harryPotter.countBooks(1000);
    cout<<harryPotter.isBookPresent('h');


}