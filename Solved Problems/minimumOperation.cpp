#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 3!=0){
                if(min(nums[i] % 3, 3-nums[i] %3)){
                    count++;
                }


            }
        }
        return count;
    }
};

int main(){
    vector<int> nums={1,2,3,4};
    Solution s;
    cout<<s.minimumOperations(nums);
    return 0;
}