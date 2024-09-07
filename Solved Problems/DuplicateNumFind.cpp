#include <bits/stdc++.h>
using namespace std;

class sol
{
public:
    int findDuplicate(vector<int> nums)
    {
        int n = nums.size();
        vector<int> hash(n, 0);

        for (int i = 0; i < n; i++)
        {

            hash[nums[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (hash[i] > 1)
            {
                return i;
            }
        }

        return -1;
    }
};

int main()
{

    vector<int> arr = {2, 3, 5, 3};

    sol s;
    cout << s.findDuplicate(arr);

    return 0;
}