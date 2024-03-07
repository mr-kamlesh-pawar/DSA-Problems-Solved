#include<iostream>
using namespace std;

class Solution{

    public:
    int lastwordlength(string s){
        int strlen= s.size();
        int i=strlen-1;
        int count=0;

        while(i>=0 && s[i]==' '){
        i--; }

        while(i>=0 && s[i]!=' '){
            count++;
            i--;
        }

        return count;
    }

}sol;

//main function

int main(){
    string ss= "  hello world   ";
    cout<<sol.lastwordlength(ss);
    return 0;
}
