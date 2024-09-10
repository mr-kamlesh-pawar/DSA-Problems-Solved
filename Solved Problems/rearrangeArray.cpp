class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
int pos=0;
int neg=1;
 vector<int> arr(nums.size());
        for(int i=0; i<nums.size(); i++){

            if(nums[i] > 0){
                arr[pos] = nums[i];
                pos+=2;
            }
            else{

                arr[neg] = nums[i];
                neg+=2;

            }

            

        }
        return arr;
    }
};