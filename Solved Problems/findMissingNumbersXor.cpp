#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(int arr[], int n)
{

    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
}

int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = 5;
    cout << "Missing Number: " << findMissingNumber(arr, 5);

    return 0;
}