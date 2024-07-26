#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int c=0;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                c=(nums[i]-1) * (nums[j]-1);
                ans.push_back(c);
            }

        }

        sort(ans.begin(), ans.end());

        return ans[ans.size()-1];
        
    }
};

int main(){
    vector<int> nums={3,4,5,2};//12
    Solution s;
    cout<<s.maxProduct(nums);
    return 0;
}