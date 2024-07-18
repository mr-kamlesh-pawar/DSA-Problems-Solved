#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

class Sol{
    public:
    int largestAltitude(vector<int> & gains){
        vector<int> ans(gains.size()+1);
        ans[0]=0;
        for(int i=0; i<gains.size(); i++){
            int temp= ans[i] + gains[i];
            ans[i+1]= temp;
        }
        sort(ans.begin(), ans.end());
        return ans[gains.size()];
    }
};

int main(){
    vector<int> gain={-5,1,5,0,-7}; //1
    Sol s;
    cout<<s.largestAltitude(gain);

    return 0;
}