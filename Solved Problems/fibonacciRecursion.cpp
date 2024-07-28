#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int f= fib(n-2);
        int s= fib(n-1);
    return (f+s);
    }
};

int main(){
    Solution s;
    cout<<s.fib(3);
    return 0;
}