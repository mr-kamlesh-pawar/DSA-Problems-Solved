#include<iostream>
#include<vector>
using namespace std;

class Solution{

    public:



    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1; i>=0; i--){
            if(digits[i]!=9){
                digits[i]=digits[i]+1;
                break;

            } else{
                digits[i]=0;
            }
        }

        if(digits[0]==0){
            vector<int> res(n+1, 0);
            res[0]=1;
            return res;
        }
        return digits;
    }
}sol;


// }sol;

int main(){
    vector<int> digits={9};
    //int digits={9};
    vector<int> result= sol.plusOne(digits);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}