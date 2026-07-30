#include<iostream>
using namespace std;

class Node{
  public :
  int data;
  Node *next;

  Node(){
     data=0;
     next=NULL;
  }

  Node(int data){
    this->data=data;
    this->next=NULL;
  }
};
class linekedlist{
    Node *head;

    public:
    linekedlist(){
        head=NULL;

    }
    void insertathead(int data){
        Node *newnode = new Node(data);

        if(head==NULL){
           head=newnode;
           return ;
        }
        newnode->next=this->head;
        this->head=newnode;

    }
    void print(){
        Node *temp=head;

         if (head == NULL) {
            cout << "List empty" << endl;
            return;
        }

        while(temp!=NULL){
            cout<<temp->data<<" ";
           temp = temp->next;
          }  }

};

int main(){

 linekedlist list;

    
    list.insertathead(5);
    list.insertathead(3);
    list.insertathead(2);
    list.insertathead(1);

    cout << "Elements of the list are: ";

 
    list.print();
    cout << endl;

    return 0;
}