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
// Input: n = 6
// Output = [1, 2, 3, 6]
// Explanation: The divisors of 6 are 1, 2, 3, 6.
