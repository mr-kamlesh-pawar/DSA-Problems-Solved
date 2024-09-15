class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int, int> mapp;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            mapp[nums[i]]++;

        }
        for(auto i : mapp){
            if(i.second ==2){
                ans.push_back(i.first);
            }

        }
        return ans;
        
    }
};