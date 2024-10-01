class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> SS, ST;

    for(int i=0; i<s.size(); i++){
        char ch1= s[i], ch2=t[i];

        if(SS.count(ch1) && SS[ch1] != ch2){
            return false;
        }
        if(ST.count(ch2)  && ST[ch2] !=ch1){
            return false;
        }

        SS[ch1]=ch2;
        ST[ch2]=ch1;

    }
return true;
        
    }
};