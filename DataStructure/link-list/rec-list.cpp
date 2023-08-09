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
    
    if(head==NULL) return;
    
    cout<<head->val<<" ";
    display(head->next);
    
}

void reverseDisplay(Node *head){
    
    if(head==NULL) return;
    reverseDisplay(head->next);

    cout<<head->val<<" ";
    
}

int main(){
    //10 20 30 40

    Node *a = new Node (10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    
    a->next = b;
    b->next = c;    
    c->next = d;
    
    // cout<<a->next->next->val;
    
    display(a);
    cout<<endl;    
    
    reverseDisplay(a);
}       