#include<iostream>
#include<vector>
using namespace std;

class Sol{
    public:

    vector<int> decompressRLElist(vector<int> &nums){
        vector<int> ans;
        for (int  i = 0; i<nums.size(); i+=2)
        {
            for(int j=0; j<nums[i]; j++){
                ans.push_back(nums[i+1]);

            }
        }
        
        return ans;
    }


};

int main(){
    vector<int> nums={1,2,3,4};
    Sol s;
    vector<int> res= s.decompressRLElist(nums);
    for(int k : res){
        cout<< k<<" ";

    }
    return 0;
}