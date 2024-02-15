#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& array, int n) {
        long sumi = n*(n+1)/2;
        long sum = 0;
        
        for(int i = 0; i <array.size(); i++) {
      
            sum = sum + array[i];
        }
        long res = sumi - sum;
        return res;
    }
}sol;

int main(){
    int n,value;
cout<<"how many no to entred: ";
cin>>n;
vector<int> array;
 for(int i=0; i<n-1; i++){
    cout<<"Enter a value: ";
    cin>>value;
    array.push_back(value);
 }

 cout<<sol.missingNumber(array, n);


    return 0;
}