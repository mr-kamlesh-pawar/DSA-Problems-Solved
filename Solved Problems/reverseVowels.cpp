class Solution {
public:
    string reverseVowels(string s) {
        string str="";
        for(auto ch : s){
            if(ch =='a' || ch=='A' || ch =='e' || ch=='E' ||ch =='i' || ch=='I' ||ch =='o' || ch=='O' ||ch =='u' || ch=='U' )
                str+=ch;
        }

        int chlen=str.length()-1;

        for(int i=0; i<s.length(); i++){
            if(s[i] =='a' || s[i]=='A' || s[i] =='e' || s[i]=='E' ||s[i] =='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' ||s[i] =='u' || s[i]=='U' )
               {
                    s[i]= str[chlen];
                    chlen-=1;
               } 

        }
        return s;
    }
};