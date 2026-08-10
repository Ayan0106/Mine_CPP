// UNLIKE JAVA here it is used INT_MIN, INT_MAX, nullptr.👇
// Also can't use the .length() here

#include<bits/stdc++.h>
using namespace std;
int find_secondmax(int arr[], int n){
    int max=INT_MIN;
    int secondmax=INT_MIN;
    //Edge cases
    if(n<2 || arr==nullptr){
        return -1;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondmax=max;
            max=arr[i];
        }
        else if(arr[i]<max && arr[i]>secondmax){
            secondmax=arr[i];
        }
    }
    if(secondmax==INT_MIN){
        return -1;
    }
    return secondmax;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<find_secondmax(arr, n)<<endl;
    return 0;
}
