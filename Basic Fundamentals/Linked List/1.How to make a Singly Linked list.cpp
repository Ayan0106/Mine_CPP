// first
//  ↓
// +------+--------+
// |  10  | second |--------+
// +------+--------+        |
//                           ↓
//                     +------+------+
//                     |  20  | NULL |
//                     +------+------+
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* ptr;
// Constructor.
    Node(int value){
        data=value;
        ptr=nullptr;
    }
};
void display(Node* head) {
   Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->ptr;
        if(temp==nullptr){
            cout<<"NULL";
        }
    }
}
int main(){
    Node* head=new Node(10);
    head->ptr=new Node(20);
    head->ptr->ptr=new Node(30);
    head->ptr->ptr->ptr=nullptr;

    display(head);
    // Node* first=new Node;
    // Node* second=new Node;
    // first->data=10;
    // first->ptr=second;
    // second->data=20;
    // second->ptr=third;
    // third->data=30;
    // third->ptr=nullptr;
    return 0;
}
