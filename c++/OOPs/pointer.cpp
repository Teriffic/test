#include<iostream>
#include<string>
using namespace std;

//user defined data type

class Student{
public:

    string name;
    int rno;
    float marks;
    Student(string name,int rno , float marks){
        this->name =name;
        this->rno = rno;
        this->marks = marks;
    }

};
void change(Student *s){
    (*s).name  ="harsh";
}

int main(){

    Student s("abhi",223,96.5);
    
    Student *ptr = &s;
    cout<<s.name<<endl;
    change(ptr);    
    cout<<s.name;
    ptr->name ="abhi";
    cout<<s.name;

}