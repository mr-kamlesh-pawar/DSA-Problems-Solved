// 3065. Minimum Operations to Exceed Threshold Value I

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Sol{
    public:

    int findMin(vector<int> &nums, int k ){
        sort(nums.begin(), nums.end());
        int c=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < k){
                c++;
            }
        }
        return c;

    }



};

int main(){
    Sol s;
    vector<int> nums={2,11,10,1,3}; //op 3
    int ans= s.findMin(nums, 10); //op 3
    cout<< ans<<endl;
    

    return 0;
}