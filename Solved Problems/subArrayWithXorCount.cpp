#include <bits/stdc++.h>
using namespace std;

int solve(int A[], int n1, int B)
{
    int count = 0;
    for (int i = 0; i < n1; i++)
    {
        int xor1 = 0;
        for (int j = i; j < n1; j++)
        {
            xor1 = xor1 ^ A[j];

            if (xor1 == B)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int A[] = {4, 2, 2, 6, 4};
    int B = 6;
    int n1 = sizeof(A) / sizeof(A[0]);
    cout << solve(A, n1, B);
    return 0;
}

// Input 1:

//  A = [4, 2, 2, 6, 4]
//  B = 6
// Input 2:

//  A = [5, 6, 7, 8, 9]
//  B = 5

// Example Output
// Output 1:

//  4
// Output 2:

//  2