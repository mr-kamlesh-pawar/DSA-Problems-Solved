#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> exe(heights);
        
         sort(heights.begin(), heights.end());
        int count=0;
        for(int i=0; i<heights.size(); i++){
            if(heights[i] != exe[i]){
                count++;

            }
        }
        return count;
        
    }
};

int main(){

    vector<int> he={1,1,4,2,1,3}; //3
    Solution s;
    cout<<s.heightChecker(he);
    return 0;

}