class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int supfix=1;
        int prefix=1;
        int maxi=INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(prefix==0) prefix=1;
            if(supfix==0) supfix=1;

            prefix= prefix * nums[i];
            supfix= supfix* (nums[nums.size()-i-1]);
            maxi= max(maxi, max(prefix, supfix) );
        }
        
    return maxi;
    }
};