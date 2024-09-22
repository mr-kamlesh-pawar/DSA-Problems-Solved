class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        int maxi=0;
        int sum=0;
        unordered_map<int,int> mapp;
        
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(sum==0){
                maxi= i+1;
                
            }
            if(mapp.find(sum) != mapp.end()){
                maxi= max(maxi, i-mapp[sum]);
                
            }else{
                mapp[sum]=i;
                
            }
            
            
            
        }
        
        
        
        
        return maxi;
    }
};