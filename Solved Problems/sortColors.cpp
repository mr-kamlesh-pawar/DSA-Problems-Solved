class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        vector<int> ans(nums.size());
        int start = 0;
        int end = nums.size() - 1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                ans[start] = nums[i];
                start++;
            }

            if (nums[i] == 2)
            {
                ans[end] = nums[i];
                end--;
            }
        }
        for (int i = start; i <= end; i++)
        {
            ans[i] = 1;
        }

        for (int j = 0; j < ans.size(); j++)
        {
            nums[j] = ans[j];
        }
    }
};