#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count =0;
        for(int i=0; i<hours.size(); i++){
            if( hours[i] >= target)
            count++;
        }
        return count;
    }
};
int main(){
    Solution s;
    vector<int>  hours = {1,2,5,6,5};
    int n= s.numberOfEmployeesWhoMetTarget(hours,3);
    cout<<n;
    return 0;
}