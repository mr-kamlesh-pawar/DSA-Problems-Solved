public class isPowerOfTwo {
    //isPoweroftwo

    boolean isPowoftwo(int n){
        if(n==0)
            return false;
        
            while(n>1 && (n&1)==0){
                n>>=1;
            } return n==1?true:false;
    }
    public static void main(String args[]){
        isPowerOfTwo ip= new isPowerOfTwo();
        System.out.println("HHHHH");
        System.out.println("To Check the power odf 2 is or not: ");
        int n=1;
        while(n<=10){
            System.out.println("The no is a "+n+" : "+ ip.isPowoftwo(n));
            n++;
        }
    }
}
