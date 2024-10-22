class MaxDepth {
    public int maxiDepth(String s) {
        int curr=0;
        int maxi=0;
        for(int i=0; i<s.length();i++){
            if(s.charAt(i)=='('){
                curr++;
               maxi=Math.max(maxi,curr);
            }else if(s.charAt(i)==')'){
                curr--;


            }
        }
        return maxi;
    }
}