#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Sol{
    public:
    int addedInt(vector<int> &nums1, vector<int> &nums2){
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int x=0;
        for(int i=0; i<nums1.size(); i++){
            x=nums2[i]-nums1[i];
        }

        return x;
    }


};

int main(){
    vector<int> nums1{2,6,4};
    vector<int> nums2{9,7,5};
    Sol s;
    cout<<s.addedInt(nums1, nums2);



    return 0;
}