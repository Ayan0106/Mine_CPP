// 153, 407, 1634
// 1+125+27=153
#include<bits/stdc++.h>
using namespace std;
bool findArmstrong(int n){
    int count=0;
    int sum=0;
    int real=n;
    int original=n;
    while (n!=0){
        n/=10;
        count++;
    }
    while(real!=0){
        int num=real%10;
        sum+=pow(num, count);
        real/=10;
    }
    if (sum==original) return true;
    return false;
}
int main (){
    int n;
    cin>> n;
    if(!findArmstrong(n)){
        cout<<"Not a Armstrong number";
    }
    else{

        cout<<"Armstrong Number";
    }
    return 0;
}





