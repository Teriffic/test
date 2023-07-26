#include<iostream>
#include<string>

using namespace std;


class player{
    private:
    int health;
    int age;
    int score;
    bool alive;

    //getter
    public:

    int getHealth(){
        return health;

    }

    int getAge(){
        return age;
        
    }
    int getScore(){
        return score;
        
    }

    int IsAlive(){
        return alive;
    }

    //setter
    
    void setHealth(int health){
        
        this->health = health;


    }

    int setAge(int age){
        this->age =age;
        
    }
    int setScore(int score){
        this->score = score;
        
    }

    int IsAlive(bool alive){
        this->alive = alive;
    }
    


};

int main(){

    int a =10;
    player harsh; // object create statiscally
    player abhi; 
    
    harsh.setScore(50); 
    harsh.setHealth(100);
    harsh.setAge(15);
    harsh.IsAlive(true);

    
    abhi.setScore(125); 
    abhi.setHealth(65);
    abhi.setAge(18);
    abhi.IsAlive(true);

    
    player* urvi = new player;
    
    urvi->setHealth(100);

    cout<<urvi->getHealth();

}