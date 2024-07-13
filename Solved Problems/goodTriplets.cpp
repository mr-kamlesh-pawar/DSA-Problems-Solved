// 0 <= i < j < k < arr.length
// |arr[i] - arr[j]| <= a
// |arr[j] - arr[k]| <= b
// |arr[i] - arr[k]| <= c
#include <iostream>
#include <vector>

using namespace std;

class Sol
{
public:
    int goodtrip(vector<int> &arr, int a, int b, int c)
    {
        int count = 0;
        int n = arr.size();

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k])<=b && abs(arr[i] - arr[k])<=c )
                        {
                            count++;
                        }
                }
            }
        }

        return count++;
    }
};

int main()
{

    vector<int> arr = {1, 1, 2, 2, 3}; // op=0
    Sol s;
    cout << s.goodtrip(arr, 0, 0, 1);

    return 0;
}