#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> ans;

        for(int i=0; i<accounts.size(); i++){
                int sum= 0;
            for(int j=0; j<accounts[0].size(); j++){
                sum= sum + accounts[i][j];
            }
            ans.push_back(sum);
        }

        sort(ans.begin(), ans.end());
        int n=ans.size();
        int ss= ans[n-1];
        return ss;
        
    }
};