#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int mostFrequentele(vector<int> nums, int k)
    {

        int res = 1;
        int start = 0;
        int end = 0;
        long sum = 0;

        while (end < nums.size())
        {
            sum += nums[end++];

            if (sum + k < (long)nums[end - 1] * (end - start))
            {
                sum -= nums[start++];
            }
            res = max(res, end - start);
        }
        return res;
    }
};

int main()
{
    vector<int> nums = {1, 2, 4};
    int k = 5;
    Solution s;
    cout << s.mostFrequentele(nums, k);

    return 0;
}