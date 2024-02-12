#include<vector>
#include<iostream>
using namespace std;

class soluation{
  public:
    int singleNumber(vector<int> &nums ){
        int xor1=0;
        for(int i=0; i<nums.size(); i++){
            xor1= xor1 ^ nums[i];
        } return xor1;
    }


}sol;

int main(){
    vector<int> nums={4,1,3,1,3};
    cout<<sol.singleNumber(nums);

return 0;
}
