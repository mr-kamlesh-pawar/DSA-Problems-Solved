#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
 
    int sumOfUnique(vector<int>& nums) {
        int ans=0;
        int counts[101];
        for(int i: nums){
            counts[i]++;
        }

        for(int i=0; i<101; i++){
            if(counts[i] ==1){
                ans+=i;
            }
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {1,2,3,2};
    Solution s;
    cout<<s.sumOfUnique(nums);
    return 0;
}