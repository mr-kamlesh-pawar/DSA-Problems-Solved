class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0;
        int cnt2=0;
        int ele1, ele2= INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(cnt1==0 && ele2 != nums[i]){
                cnt1=1;
                ele1=nums[i];

            }
           else if(cnt2==0 && ele1 != nums[i]){
                cnt2=1;
                ele2=nums[i];

            }
            else if(ele1 == nums[i]) cnt1++;
            else if(ele2 == nums[i]) cnt2++;

            else{
                cnt2--, cnt1--;
            }

        }

        vector<int> ls;
        cnt1=0; cnt2=0;
        for(int i=0; i<nums.size(); i++){
            if(ele1 ==nums[i]) cnt1++;
            if(ele2 ==nums[i]) cnt2++;
        }

        int mini=(int) (nums.size()/3)+1;

        if(cnt1 >= mini) ls.push_back(ele1);
        if(cnt2 >= mini) ls.push_back(ele2);

        sort(ls.begin(), ls.end());
        return ls;
        
    }
};