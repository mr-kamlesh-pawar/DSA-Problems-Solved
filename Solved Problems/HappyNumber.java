import java.util.HashSet;
import java.util.Set;

public class HappyNumber {

    public static boolean isHappy(int n){
        // int sum=0; int temp=0;
        // Set<Integer> seen= new HashSet<>();
        // while(!seen.contains(n)){
        //     seen.contains(n);
        //     while(n!=0){
        //         temp= n%10;
        //         sum= sum+temp*10;
        //         n=n/10;
        //     }
        //     n=sum;
        // }
        // return n==1;

        Set<Integer> seen= new HashSet<>();
        while(true){
            int sum=0;
            while(n!=0){
                sum+=Math.pow(n%10, 2.0);
                n=n/10;
            }
            if(sum==1) return true;

            n=sum;
            if(seen.contains(n)){
                return false;
            }
            seen.add(n);
        }
    }
    public static void main(String args[]){
        HappyNumber hn= new HappyNumber();
        System.out.println("To check the Number 4 is happy number or not: "+ hn.isHappy(4));
    }
}
