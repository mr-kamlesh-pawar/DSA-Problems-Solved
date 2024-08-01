// 13. Roman to Integer

#include<iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        vector<char> Ch(s.begin(), s.end());
        for(int i=0; i<Ch.size(); i++){
            
            if(Ch[i]=='I'){
                if(i+1 <Ch.size() && ( Ch[i+1] =='V' || Ch[i+1] =='X')){
                    ans=ans-1;
                } else{
              ans=ans+1;
            }

            }
            
            else if(Ch[i]=='V')
                ans=ans+5;
            else if(Ch[i]=='X'){
                if(i+1 < Ch.size() && ( Ch[i+1]=='L' || Ch[i+1]=='C'  )){
                    ans=ans-10;

                }else
                    ans=ans+10;
            }

            else if(Ch[i]=='L')
                ans=ans+50;
            else if(Ch[i]=='C'){
                if(i+1<Ch.size() && (Ch[i+1]=='D' || Ch[i+1]=='M')){
                    ans=ans-100;

                }else
                ans=ans+100;           
            }

            else if(Ch[i]=='D')
                ans=ans+500;
            else if(Ch[i]=='M')
                ans=ans+1000;

        }

        return ans;
        
    }
};

int main(){
    string s;
    cout<<"Enter Roman Number (Ex. IIV): ";
    cin>>s;
    Solution sol;
    cout<<sol.romanToInt(s);
    return 0;
}