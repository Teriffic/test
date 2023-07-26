#include<iostream>
#include<string>

using namespace std;

class Gun{
    public:

    int ammo;
    int damage;
    int scope;


};

class player{

    class Helmet{
        private:
        
        int level;
        int health;
        public:
        int getHealth(){
            return health;
        }
        int getLevel(){
            return level;

        }
        void setHealth(int health){
            this->health = health;
        }
        void setLevel(int level){
            this->level = level;
        }
    };

    private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;
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
    Gun getGun(){
        return gun;
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
    Gun setGun(Gun gun){
        this->gun = gun;
    }
    void sethelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health =0;
        
        if(level ==1) health =25;
        else if(level == 2) health =50;
        else if(level == 3) health =100;
        else cout<<"error";

        helmet->setHealth(health);

    }
};

int main(){

    
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
    
    Gun akm;
    akm.ammo =100;
    akm.damage =200;
    akm.scope=2;
    harsh.setGun(akm);
    harsh.sethelmet(3);

               
}