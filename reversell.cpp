#include<iostream>
using namespace std;

struct Node{
    int val;
    Node*next;

};

void displayreversell(Node *head){
    if( head== NULL){
        return ;
    }

    displayreversell(head->next);
    cout<<head->val<<" ";

}

int main(){
    Node *head=new Node{10,NULL};
    head->next=new Node{20,NULL};
    head->next->next=new Node{30,NULL};
    cout<<"reverse order :"<<endl;
    displayreversell(head);
    return 0;
}