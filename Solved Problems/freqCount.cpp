class Solution
{
public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int> &arr, int N, int P)
    {
        map<int, int> mp;
        for (int i = 0; i < N; i++)
        {
            mp[arr[i]]++;
        }
        for (int i = 1; i <= N; i++)
        {
            if (mp.find(i) != mp.end())
            {
                arr[i - 1] = mp[i];
            }
            else
            {
                arr[i - 1] = 0;
            }
        }
    }
};