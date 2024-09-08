class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // int n= nums.size();
        // map<int,int> mapp;

        // for(int i=0; i<n; i++){
        //     mapp[nums[i]]++;
        // }

        // for(auto a: mapp){
        //     if(a.second > n/2){
        //         return a.first;
        //     }
        // }
        // return -1;

        int cnt = 0;
        int ele;

        for (int i = 0; i < nums.size(); i++)
        {
            if (cnt == 0)
            {
                cnt = 1;
                ele = nums[i];
            }

            else if (ele == nums[i])
            {
                cnt++;
            }

            else
            {
                cnt--;
            }
        }
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == ele)
            {
                count++;
            }
        }
        if (count > (nums.size() / 2))
        {
            return ele;
        }
        return -1;
    }
};