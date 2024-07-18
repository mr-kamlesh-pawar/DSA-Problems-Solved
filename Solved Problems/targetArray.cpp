#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
class Sol {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        int n=nums.size();
        int i=0;
        while(n>0){
            target.insert(target.begin()+index[i] , nums[i]);

            i++;
            n--;
        }
        return target;
    }
};

int main(){
    vector<int> nums={0,1,2,3,4}; //1
    vector<int> index={0,1,2,2,1}; //1
    //Output: [0,4,1,3,2]
    Sol s;
    vector<int> op=s.createTargetArray(nums, index);
    for(int i : op){
        cout<<i<<endl;
    }
    

    return 0;
}