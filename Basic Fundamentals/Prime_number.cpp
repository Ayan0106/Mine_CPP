#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter number :";
    cin>>n;
    if(n==0 || n==1){
        return 0;
    }
    else {
        for(int i=0;i<=sqrt(n);i++){
            if(n%i==0){
                return 0;
            }
        }
    }
    cout <<"Prime number";
    return 0;
}
