class Solution {
    public int uniqueMorseRepresentations(String[] words) {
         String[] morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", 
                                 "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", 
                                 "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", 
                                 "-.--", "--.."};
      HashSet<String> str = new HashSet<>();
        for(String word : words){
            StringBuilder morseStr= new StringBuilder();

            for(char ch : word.toCharArray()){
                morseStr.append(morse[ch- 'a']);

                
            } 
            str.add(morseStr.toString());
        }
        return str.size();
    }
}