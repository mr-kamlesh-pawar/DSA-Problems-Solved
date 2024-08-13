class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {

        map<int, int> mapp;

        for (int i = 0; i < nums.size(); i++)
        {
            mapp[nums[i]]++;
        }
        vector<int> ans;

        for (auto it : mapp)
        {
            if (it.second == 1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};