class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]) continue;

            for(int j=i+1; j<nums.size(); j++){
                if(j-1!=i && nums[j] == nums[j-1])continue;

                int k=j+1;
                int l=nums.size()-1;

                while(k<l){
                    long long sum= nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+= nums[l];

                    if(sum== target){
                        vector<int> temp;
                        temp={nums[i], nums[j], nums[k] , nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k] == nums[k-1]) k++;
                        while(k<l && nums[l] == nums[l+1]) l--;

                    }else if(sum < target){
                        k++;

                    }else{ //sum>target
                    l--;

                    }

                }

            }

        }
        return ans;
    }
};