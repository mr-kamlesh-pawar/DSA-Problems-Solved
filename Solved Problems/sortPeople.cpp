#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;

        for(int i=0; i<heights.size(); i++){
            for(int j=0; j<heights.size(); j++){

                if(heights[i] > heights[j]){
                    int temp;
                    string temps;

                    temp= heights[i];
                    heights[i]= heights[j];
                    heights[j]= temp;

                    temps= names[i];
                    names[i]= names[j];
                    names[j]= temps;
                }
            }
        }

        return names;
        
    }
};