#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
      
        vector<int> lucky;

        for(int i=0; i<matrix.size(); i++){
          int res=matrix[i][0];
          int minInd=0;
            for(int j=0; j<matrix[i].size(); j++){
              
                if(matrix[i][j] < res){
                    minInd=j;
                    res=matrix[i][j];
                }
                
            }
            
            bool isLucky =true;
            for(int k=0; k<matrix.size(); k++){
                long rem=matrix[k][minInd];
                if(rem > res ){
                    isLucky=false;
                    break;


                }
            }
            if(isLucky) lucky.push_back(res);
        }   

     
        return lucky;
    }
};

int main(){
vector<vector<int>> matrix={ {3,7,8},{9,11,13},{15,16,17}};
Solution s;
vector<int> red=s.luckyNumbers(matrix);
for(int i : red){
    cout<<i<<endl;
}
    return 0;
}