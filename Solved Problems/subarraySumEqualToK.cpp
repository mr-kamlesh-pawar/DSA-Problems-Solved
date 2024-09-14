class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int count=0;
        // for(int i=0; i<nums.size(); i++){
        //     int sum=0;
        //     for(int j=i; j<nums.size(); j++){
        //         sum+=nums[j];
        //         if(sum== k){
        //             count+=1;

        //         }
        //     }

        // }
        // return count;

        map<int,int>mapp;
        mapp[0]=1;
        int presum=0, count=0;

        for(int i=0; i<nums.size(); i++){
            presum+=nums[i];
            int remove= presum-k;
            count+=mapp[remove];
            mapp[presum]+=1;

        }
        return count;
    }
};