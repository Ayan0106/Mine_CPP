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
    Node* next;
    };
int main(){
    Node* first=new Node;
    Node* second=new Node;

    first->data=10;
    first->next=second;

    second->data=20;
    second->next=nullptr;
    return 0;
}
