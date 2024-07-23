#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ansarr;
        int t= 0 ^ pref[0];
        ansarr.push_back(t);
        
        for(int i=0; i<pref.size()-1; i++){
            int a=pref[i];
            int b= pref[i+1];
            int ans= a ^ b;
            ansarr.push_back(ans);

         }
         return ansarr;
    }
};

int main(){
    Solution s;
  vector<int> pref={5,2,0,3,1};  //op 5,7,2,3,2
  vector<int> aa= s.findArray(pref);
  for(int i : aa){
    cout<<i<<endl;
  }

    return 0;
}