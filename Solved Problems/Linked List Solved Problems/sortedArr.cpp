class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        long long sq=0;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            sq=nums[i] * nums[i];
            ans.push_back(sq);

        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};