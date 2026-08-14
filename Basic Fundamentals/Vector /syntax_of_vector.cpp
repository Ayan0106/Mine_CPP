#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v={10,20,30};
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(40);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.insert(v.begin(), 40);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
// 3
// 3
// 10 20 30 40 
// 4
// 6
// 10 20 30 
// 3
// 6
// 40 10 20 30 
