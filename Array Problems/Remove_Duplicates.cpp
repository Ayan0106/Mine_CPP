// Input: 5
// 0 0 1 2 2
// Output: 3
// 0 1 2 
#include<bits/stdc++.h>
using namespace std;
int remove_duplicates(int arr[], int n){
    if(arr==nullptr){
        return -1;
    }
    int index=0;
    for(int i=index+1;i<n;i++){
        if (arr[i]!=arr[index]){
            index++;
            arr[index]=arr[i];
        }
    }
    return index+1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        if(arr[i]>INT_MAX || arr[i]<INT_MIN){
            cout<<"Size exceed";
            return -1;
        }else{
            cin>>arr[i];
        }
    }    
    int k=remove_duplicates(arr,n);
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

