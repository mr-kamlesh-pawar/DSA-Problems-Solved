#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++){
            int count=0;
            for(int j=0; j<nums.size(); j++){
                if(nums[i]> nums[j]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
        
    }
};

int main(){
    vector<int>nums{5,3,6,89,4};
    Solution s;
    vector<int> anss=s.smallerNumbersThanCurrent(nums);
    for (int a: anss){
        cout<<a<<" ";
    }


    return 0;
}