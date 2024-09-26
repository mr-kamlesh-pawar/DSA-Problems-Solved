class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(int i=0; i<words.size(); i++){
            string og= words[i];
            reverse(og.begin(), og.end());

           if(og == words[i]){
            return words[i];
           }

        }

        return "";
    }
};