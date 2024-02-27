import java.util.LinkedList;
import java.util.List;

public class KeboardRow {
    public String[] findwords(String[] words){

        String row1="qwertyuiop";
        String row2="asdfghjkl";
        String row3="zxcvbnm";

            List<String> list= new LinkedList<>();

        for(String word:words){
            int[] row= new int[3];
            for(char ch:word.toLowerCase().toCharArray()){

                if(row1.indexOf(ch)!=-1){
                    row[0]=1;
                }else if(row2.indexOf(ch)!=-1){
                        row[1]=1;
                } else{
                    row[2]=1;
                }
            }

            int sum= row[0]+row[1]+row[2];
            if(sum==1){
                list.add(word);
            }
        }
        String[] arr= new String[list.size()];
        int i=0;
        for(String word:list){
            arr[i++]=word;
           
        } return arr;
    }


    public static void main(String args[]){
        String[] inputWords = {"hello", "world", "java", "qwert", "type", "test"};
        KeboardRow kb= new KeboardRow();
        String[] result = kb.findwords(inputWords);

        System.out.println("Words that can be typed using a single row:");
        for (String word : result) {
            System.out.println(word);
        }

    }
    
}
