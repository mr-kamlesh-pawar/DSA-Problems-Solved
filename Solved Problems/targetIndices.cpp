#include<bits/stdc++.h>
using namespace std;
 class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans={};
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                ans.push_back(i);

            }
        }
        return ans;
        
    }
};
int main(){
    vector<int> nums={1,2,3,4,2};
    int target=2;
    Solution s;
    vector<int> c=s.targetIndices(nums, target);
    for(int i : c){
        cout<<i<<endl;
    }
    return 0;
}