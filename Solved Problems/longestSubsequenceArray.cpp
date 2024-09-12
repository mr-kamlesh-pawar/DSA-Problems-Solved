class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

    // if(nums.size() ==0) return 0;

    // sort(nums.begin(), nums.end());
    //     int count=0;
    //     int presmall=INT_MIN;
    //     int longestcount=1;
        
    //     for(int i=0; i<nums.size(); i++){
    //         if(nums[i] -1 == presmall){
    //             count+=1;
    //             presmall=nums[i];

    //         }else if(nums[i]!= presmall){
    //             count=1;
    //             presmall=nums[i];

    //         }
    //         longestcount= max(longestcount, count);

    //     }

    //  return longestcount;   

    if(nums.size()==0) return 0;
    int n= nums.size();
    int longest=1;
    unordered_set<int> ans;
    for(int i=0; i<n; i++){
        ans.insert(nums[i]);

    }

    for(auto it : ans){
        int count=0;
        if(ans.find(it-1) == ans.end()){
            count+=1;
            int x=it;

            while(ans.find(x+1) != ans.end()){
                count+=1;
                x+=1;

            }

        }
            longest= max(count, longest);

    }
return longest;

    }
};