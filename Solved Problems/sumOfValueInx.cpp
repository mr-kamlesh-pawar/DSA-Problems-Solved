#include<vector>
#include<iostream>
using namespace std;

class Sol{
    public:

    int sumofInx(vector<int> &nums, int k){
        int sum=0;
        int indx=0;
        for(int i: nums){
            int count= countSetBits(indx);
            indx++;
        if(k == count){
            sum=sum+i;


        }
        }

    return sum;
    }



    int countSetBits(int n){
        int count=0;
        while(n>0){
            count+=n & 1;
            n>>=1;
        }

        return count;
    }

};

int main(){

//     Input: nums = [5,10,1,5,2], k = 1
//      Output: 13

    Sol sol;
    vector<int> nums={5,10,1,5,2};
    int k=1;
    int ans= sol.sumofInx(nums,k);
    cout<<ans;

    return 0;
}
