// Before Reverse:10 20 30 
// After Reverse:30 20 10 
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
Node* reverse(Node* head){
    Node* prev=nullptr;
    Node* curr=head;
    while(curr!=nullptr){
        Node* next= curr->ptr;
        curr->ptr=prev;
        prev=curr;
        curr=next;
    }
    return prev;
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

    cout<<"Before Reverse:";
    display(head);

    head= reverse(head);

    cout<<"\nAfter Reverse:";
    display(head);
    return 0;
}

