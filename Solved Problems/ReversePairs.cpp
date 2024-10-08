#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void merge(vector<int> &nums, int low, int mid, int high) {
        int *temp = new int[high - low + 1];
        int i = low;
        int j = mid + 1;
        int k = 0;
        while((i <= mid) && (j <= high)){
            if(nums[i] < nums[j]){
                temp[k++] = nums[i++];
            }else{
                temp[k++] = nums[j++];
            }
        }

        while(i <= mid){
            temp[k++] = nums[i++];
        }
        while(j <= high){
            temp[k++] = nums[j++];
        }
        int ind = 0;
        for(int i = low;i<=high;i++){
            nums[i] = temp[ind++];
        }
    }
    
    int countReversePairs(vector<int> &nums, int low, int mid, int high) {
       int right = mid + 1;
        int cnt = 0;
        for(int i = low;i<=mid;i++){
           while(right <= high &&  (long)nums[i] > (long)2*nums[right]) right++;
           cnt += (right - (mid + 1));
        }
        return cnt;
    }
    
    int mergeSort(vector<int> &nums, int low, int high) {
         int cnt = 0;
        if(low >= high) return cnt;
        int mid = (low + high)/2;
        cnt += mergeSort(nums, low, mid);
        cnt += mergeSort(nums, mid + 1, high);
        cnt += countReversePairs(nums, low, mid, high);
        merge(nums, low, mid, high);
        return cnt;
    }
    
public:
    int reversePairs(vector<int>& nums) {
        int cnt = mergeSort(nums, 0, nums.size() - 1);
        return cnt;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2,4,3,5,1};  
    
    int reversePairCount = solution.reversePairs(nums);
    
    cout << "Number of reverse pairs: " << reversePairCount << endl;
    
    return 0;
}