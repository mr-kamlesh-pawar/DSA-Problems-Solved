class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> st;
        for(int i=1; i<height.size(); i++){
            if(height[i-1] > threshold){
                st.push_back(i);
            }

        }
        return st;
    }
    
};