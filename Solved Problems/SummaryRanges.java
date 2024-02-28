import java.util.*;
public class SummaryRanges {

    public List<String> summary(int[] nums){
        List<String> list1= new ArrayList<>() {
            
        };
        for(int i=0; i<nums.length; i++){
            int start= nums[i];

            while ((i+1)<nums.length && nums[i+1] - nums[i] ==1) {
                i++;
                
            }
            if(start != nums[i]){
               // String temp= toString(start) + "->"+toString(nums[i]);
                list1.add(Integer.toString(start) + "->"+Integer.toString(nums[i]));
            } else{
                list1.add(Integer.toString(start));
            }



        }
    
        return list1;
        
    }

    public static void main(String args[]){
        System.out.println("------Summary Ranges------");

        int[] nums= {0,1,2,4,6,7,9};
        SummaryRanges sm= new SummaryRanges();
        //System.out.println("");
        List<String> smm= sm.summary(nums);
        for(String word:smm){

            System.out.println(word);
        }


    }
    
}
