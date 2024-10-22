class Solution {
    public String reverseWords(String s) {
        String Strs[]= s.trim().split("\\s+");
        StringBuilder ss= new StringBuilder();
        for(int i=Strs.length-1; i>=0; i--){
            ss.append(Strs[i]);
            if(i>0){
                ss.append(" ");
            }
            
        }
        return ss.toString();
    }
}