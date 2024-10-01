class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        
        string st= "";
        st= strs[0];
        for(int i=1; i<strs.size(); i++){
            st= common(st, strs[i]);
        }
        return st;

       
        
    }

    //helper fun
     string common(string str1, string str2){
        int n= min(str1.size(), str2.size());
        vector<string> ss;

        for(int i=0; i<n; i++){
            if(str1[i] == str2[i]){
                ss.push_back(string(1,str1[i]));

            } else{
                break;
            }
        }
            string res="";
            for(auto p : ss){
                res+=p;

            }
            return res;

        }   
};