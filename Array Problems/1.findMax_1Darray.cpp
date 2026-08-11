// UNLIKE JAVA here it is used INT_MIN, INT_MAX, nullptr.👇
// Also can't use the .length() here
#include <bits/stdc++.h>
using namespace std;
int find_max(){
    int arr[n];
    int max=arr[0];
    for(int i=0;i<arr[n];i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<find_max()<<endl;
    return 0;
}
