#include<bits/stdc++.h>
class Solution {
public:
    vector<int> divisors(int n) {
        vector <int> newvector;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                newvector.push_back(i);
            }
        }
        return newvector;
    }
};
