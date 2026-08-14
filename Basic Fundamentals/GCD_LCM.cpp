// 12
// 18
// GCD of Two numbers: 6
// LCM of two numbers:36
#include<bits/stdc++.h>
using namespace std;
int GCD(int n1,int n2) {
        while(n1>0 && n2>0){
            if (n1>n2){
                n1=n1%n2;
            }else n2=n2%n1;
        }
        if(n1==0){
            return n2;
        }return n1;
}
int LCM(int n1, int n2){
        int gcd=GCD(n1, n2);
        return (n1/gcd)*n2;
}
int main(){
    int n1, n2;
    cin>>n1;
    cin>>n2;
    cout<<"GCD of Two numbers: "<<GCD(n1,n2)<<endl;
    cout<<"LCM of two numbers:"<<LCM(n1, n2);
    return 0;
}
