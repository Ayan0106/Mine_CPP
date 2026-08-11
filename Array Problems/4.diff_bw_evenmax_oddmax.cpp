// Difference between even maximum and odd maximum
// 12 25 18 31 40 15 22
#include <bits/stdc++.h>
using namespace std;
void op(int arr[], int n){
    int evenmax=INT_MIN;
    int oddmax=INT_MIN;
    if(arr==nullptr){
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>evenmax && arr[i]%2==0){
            evenmax=arr[i];
        }
        else if(arr[i]>oddmax && arr[i]%2!=0){
            oddmax=arr[i];
        }
    }
    cout<<evenmax<<endl;
    cout<<oddmax<<endl;
    cout<<evenmax-oddmax<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    op(arr, n);
    return 0;
}



