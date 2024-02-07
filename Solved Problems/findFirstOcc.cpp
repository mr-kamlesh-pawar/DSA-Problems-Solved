#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++) {
            string temp = haystack.substr(i, needle.size());
            if(temp == needle)
            { return i;

            }
        }
        return -1;
    }
};

int main(){
    Solution sol;
    cout<<sol.strStr("a","a");

    return 0;
}