#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0; i<n; i++){
            
                sum= sum + mat[i][i] + mat[i][n-1-i];

        }
            
            if(n%2==1)
                 return sum - mat[n/2][n/2];
            

            
            
                 return sum;
             
        
    }
};

int main(){
    vector<vector<int>>& mat={{7,3,1,9},{3,4,6,9},{6,9,6,6},{9,5,8,5}};
    Solution s;
    cout<<s.diagonalSum(mat);
    return 0;
}