// 5
// 5 10 20 30 
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* ptr;
    Node(int value){
        data=value;
        ptr=nullptr;
    }
};
Node* insertbeg(Node* head, int value){
    Node* newnode=new Node(value);
    newnode->ptr=head;
    head=newnode;
    return head;
}
void display(Node* head) {
   Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->ptr;
    }
}
int main(){
    Node* head=new Node(10);
    head->ptr=new Node(20);
    head->ptr->ptr=new Node(30);
    head->ptr->ptr->ptr=nullptr;

    int value;
    cin>>value;
    
    head= insertbeg(head, value);
    display(head);
    return 0;
}

