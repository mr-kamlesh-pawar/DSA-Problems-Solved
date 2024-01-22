//26. Remove Duplicates from Sorted Array
// Example 1:
// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).

#include<iostream>
#include<vector>

using namespace std;

class solution{
    public:
 int removeDulicates(vector<int> &nums){
    int j=0;
    for(int i=1; i<nums.size(); i++){
        if(nums[i] != nums[j]){
            j++;
            nums[j]=nums[i];
        }
    } return j+1;

 }

};

int main(){
solution sol;
  vector<int> nums={1,2,2,3,4,4};
  int t=sol.removeDulicates(nums);
  cout<<t;

    return 0;
}

