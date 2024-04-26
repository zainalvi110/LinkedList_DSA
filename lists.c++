#include <iostream>
using namespace std;

class zee{   //! class for node
    public:
    int data;
    zee *next;
  
   zee(int data){
    this->data=data;
    this->next=NULL;
   }

};
  void insertathead(zee*&head,int data){
    zee* anothernode= new zee(data);
     anothernode->next=head;
     head=anothernode;

  }
  void display(zee*head){
    zee*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
      cout<<"null"<<endl;

  }
int main(){
  zee*head=NULL;
insertathead(head,8);
display(head);
insertathead(head,10);
display(head);

}
