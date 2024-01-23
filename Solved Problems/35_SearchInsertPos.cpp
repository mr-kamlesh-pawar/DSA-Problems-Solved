// 35. Search Insert Position
// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:

// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Example 2:

// Input: nums = [1,3,5,6], target = 2
// Output: 1
// Example 3:

// Input: nums = [1,3,5,6], target = 7
// Output: 4

#include<iostream>
#include<vector>
using namespace std;

class A{

public:
int pos=0;

 int searchInsert(vector<int> &nums, int target){
 for(int i=0; i<nums.size(); i++){
  if(target==nums[i]){
    pos=i;
    break;
  }

  if((nums[i]<target && nums[i+1]>target)|| (nums[i]<target && i+1==si)){
    
    pos=i+1;
    break;
  }

 }

return pos;

 }

}a;

int main(){
    int si=nums.size();
    int targ=7;
    vector<int> nums={1,3,5,6};
    cout<<a.searchInsert(nums,targ);

    return 0;
}