#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> checkFreq(vector<int>& nums) {
        vector<int> count(101, 0);
        for(int i: nums){
            count[i]=1;
        }
        return count;

    }

    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> count1= checkFreq(nums1);
        vector<int> count2= checkFreq(nums2);
        vector<int> count3= checkFreq(nums3);
        vector<int> res={};

        for(int k=0; k<=100;k++ ){
        if((count1[k] + count2[k] + count3[k])>=2){
            res.push_back(k);

        } 
    }

       return res;
        
    }
};

int main(){
    vector<int> nums1={1,1,3,2};
    vector<int> nums2={2,3};
    vector<int> nums3={3};
    Solution s;
    vector<int> numsres=s.twoOutOfThree(nums1, nums2, nums3);
    for(int i: numsres){
        cout<<i<<endl; //2,3
    }
    return 0;
}