#include<bits/stdc++.h>
using namespace std;
void reverse(int n){
    int original=n;
    int rev=0;
    while (n!=0){
        rev*=10;
        rev+=n%10;
        n/=10;
    }
    cout<<"Reverse of the number is "<<rev<<endl;
    if(original==rev){
        cout<<"the number is palindrome";
    }else{
        cout<<"the number is not palindrome";
    }
}
int main(){
    int n;
    cin>>n;
    reverse(n);
    return 0;
}
