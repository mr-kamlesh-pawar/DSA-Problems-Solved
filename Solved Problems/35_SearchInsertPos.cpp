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

//DSA Practice 

#include<iostream>
#include<vector>
using namespace std;

class A{

public:
int pos=0;

 int searchInsert(vector<int> &nums, int target){
 int start=0;
 int end= nums.size()-1;
  int mid;
 for(int i= start; start<=end; i++){
  mid= (start+end)/2;

  if(target == nums[mid]){
return mid;
  }

  if(nums[mid]<target){
   start = mid+1;
  }

  if(nums[mid]>target){
    end=mid-1;

  }


 
 }
 
 return start; } 

}a;

int main(){

    int target=4;
    vector<int> nums={1,3,5,6,44};
    cout<<a.searchInsert(nums,target);

    return 0;
}
