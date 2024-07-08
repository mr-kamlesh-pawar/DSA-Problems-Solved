#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int n= candies.size();
       int max=0;
        for(int j=0; j<n; j++){
            if(max<= candies[j])
                max=candies[j];
        }

        vector<bool> result;
        for(int i=0; i<n; i++){

            if( candies[i]+ extraCandies >= max){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        
        return result;
    }
};

int main(){
    Solution s;
    vector<int> can={2,3,5,1,3}; //op [true,true,true,false,true]
    vector<bool> ans = s.kidsWithCandies(can, 3);
    for (bool a : ans){
    cout << (a ? "true" : "false")<<" " ;
    }
    return 0;
}