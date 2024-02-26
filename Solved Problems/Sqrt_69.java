import java.util.*;
/**
 * Sqrt_69
 */
public class Sqrt_69 {

    public int sqrt1(int x){
        long  start=1;
        long end= x;
        long ans=0;
        //System.out.println("helooooooo");
        while (start<=  end) {
            
       
        long mid=start + (end- start)/2;

        if(mid*mid== x){
            ans= (int)mid;
            break;
        } else if (mid*mid < x) {
            start= mid+1;
            ans= (int)mid;
            
            
        } else{
            end= mid-1;
        }
     
      
    }

        return (int)ans;
    }



    public static void main(String args[]) {
        Sqrt_69 sq= new Sqrt_69();
       System.out.println( sq.sqrt1(8));
       
    }
    
}
