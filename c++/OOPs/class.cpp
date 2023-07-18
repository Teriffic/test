#include<iostream>
#include<string>

using namespace std;


class player{
   private:

   int score; // data members
   string name;
   
   int health;
   //setter
   public:
   void setScore(int s){
      score =s;

   }
   void setHealth(int h){
      health =h;
   }
   //getter
   int getScore(){
      return score;
   }
   int getHealth(){
      return health;
   }

};


int main(){

   int a =10;
   player harsh;

   harsh.setScore(50);
   harsh.setHealth(100);
   
   cout<<harsh.getScore();
}