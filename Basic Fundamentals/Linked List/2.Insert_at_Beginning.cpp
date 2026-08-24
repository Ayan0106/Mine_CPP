// 5
// 5->10->20->NULL
// 30
// 5->10->20->30->NULL

#include <bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  Node* ptr;
  Node(int value){
      data=value;
      ptr= nullptr;
  }
};

Node* insertbeg(Node* head, int value){
    Node* newnode=new Node(value);
    newnode->ptr=head;
    head=newnode;
    return head;
}
Node* insertend(Node* head, int value){
    Node* newnode=new Node(value);
    
    Node* temp=head;
    while(temp->ptr!=nullptr){
        temp=temp->ptr;
    }
    temp->ptr=newnode;
    return head;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->ptr;
        if(temp==nullptr){
            cout<<"NULL";
        }
    }
}
int main (){
    Node* head=new Node(10);
    head->ptr=new Node(20);
    head->ptr->ptr=nullptr;
    // insertion at the beg.
    int n;
    cin>>n;
    head=insertbeg(head, n);
    display(head);
    
    cout<<endl;
    // insertion at the end.
    int n2;
    cin>>n2;
    head=insertend(head, n2);
    display(head);
    
    return 0;
}
