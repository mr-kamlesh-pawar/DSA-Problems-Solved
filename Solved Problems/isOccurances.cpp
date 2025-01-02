class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int  count[26]= {0};

        for(char ch:s){
            count[ch - 'a']++;

        }

        int  x=0;
        for(int i=0;i<26;i++){
            if(count[i] !=0){
                if(x ==0){
                    x= count[i];

                } else if(count[i] != x){
                    return false;

                }

            }
        }
        return true;
    }
};