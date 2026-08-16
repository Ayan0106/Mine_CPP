// 12,45,55,4,15
// 12
#include<bits/stdc++.h>
using namespace std;
int findSmallnumber(int arr[], int n){
    int min=INT_MAX;
    int secondmin=INT_MAX;
    for (int i=0;i<n;i++){
        if(arr[i]<min){
            secondmin=min;
            min=arr[i];
        }
        else if(arr[i]<secondmin && arr[i]>min){
            secondmin=arr[i];
        }
    }
    if(secondmin==INT_MAX){
        return -1;
    }
    return secondmin;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findSmallnumber(arr, n);
    return 0;

}
