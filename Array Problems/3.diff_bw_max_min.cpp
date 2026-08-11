// Difference between maximum and minimum
// 10,12,7,8
#include <bits/stdc++.h>
using namespace std;
void op(int arr[], int n){
    int max=arr[0];
    int min=arr[0];
    if(arr==nullptr || n<2){
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }else if (arr[i]<min){
            min=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<max-min<<endl;
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



