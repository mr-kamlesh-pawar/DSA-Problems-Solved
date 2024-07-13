#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> final;
        for(int i=0; i<mountain.size()-1; i++){
            if((i!=0) && (i!=mountain.size())){
            if((mountain[i]> mountain[i+1]) && (mountain[i]  > mountain[i-1])){
                final.push_back(i);
            }
            }
        }
        return final;
    }
};

int main(){
    Solution s;
    vector<int> nums={1,4,3,8,5};//1,3
    vector<int> ans=s.findPeaks(nums);
    for(int i : ans){
        cout<<i<<" ";
    }


    return 0;
}