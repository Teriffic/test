#include<iostream>
#include<string>
using namespace std;

//user defined data type

class Node{

public:
    int val;
    Node *next;
    Node(int val){
        this->val =val;
        this->next = NULL;
    }

};
void display(Node *head){
    
    while(head!=NULL){
        cout<<head->val<<endl;
        head = head->next;
    }
}
int size(Node *head){

    static int a=0;
   
    while(head!=NULL){

        a++;
        head = head->next;
    }
    return a;
}


int main(){
    //10 20 30 40

    Node *a = new Node (10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);  
    a->next = b;
    b->next = c;    
    c->next = d;
    d->next = e;

    display(a);
    cout<<size(a);
    
}       