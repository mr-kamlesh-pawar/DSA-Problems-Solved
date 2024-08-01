// 1512. Number of Good Pairs
// Easy
// Topics
// Companies
// Hint
// Given an array of integers nums, return the number of good pairs.

// A pair (i, j) is called good if nums[i] == nums[j] and i < j.

// Example 1:

// Input: nums = [1,2,3,1,1,3]
// Output: 4
// Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
// Example 2:

// Input: nums = [1,1,1,1]
// Output: 6
// Explanation: Each pair in the array are good.
// Example 3:

// Input: nums = [1,2,3]
// Output: 0

// Constraints:

// 1 <= nums.length <= 100
// 1 <= nums[i] <= 100

#include <iostream>
#include <vector>
using namespace std;

class sol
{
public:
    int goodpair(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if ((nums[i] == nums[j]) && (i < j))
                    count++;
            }
        }
        return count;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 1, 1, 3};
    sol s;
    int ans = s.goodpair(nums);
    cout << ans << endl;
    return 0;
}