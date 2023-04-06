#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int a){
        this->data=a;
        this->next=NULL;
    }
};
node* takeInput(){
    cout<<"Enter data of root node";
    int n;
    cin>>n;
    node* head;
    node* tail;
    while(n!=-1){
        
    }
    return head;
}
int main(){
    node* root=takeInput();
}