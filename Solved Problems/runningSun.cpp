// 1480. Running Sum of 1d Array

// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of nums.

 

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
// Example 2:

// Input: nums = [1,1,1,1,1]
// Output: [1,2,3,4,5]
// Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
// Example 3:

// Input: nums = [3,1,2,10,1]
// Output: [3,4,6,16,17]

#include<bits/stdc++.h>
using namespace std;
class sol{
public:
 vector<int> running(vector<int>&nums){
 vector<int> temp(nums.size());

 for(int i=0; i<nums.size(); i++){
    int s=0;
    for(int j=0; j<=i; j++){
        s=s+nums[j];

    }
    temp[i]=s;
 }

 return temp;
 }

};

int main(){
    vector<int> nums={1,2,3,4};
    sol s;
    vector<int> ans= s.running(nums);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}