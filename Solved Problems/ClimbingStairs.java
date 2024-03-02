public class ClimbingStairs {
    int Steps(int n){
        int[] df=new int[n+1];
        df[1]=1;
        df[2]=2;

        for(int i=3; i<=n; i++){
            df[i]=df[i-1]+df[i-2];
        }

        return df[n];
    }
    
    public static void main(String args[]){
        int n=8;
        ClimbingStairs st= new ClimbingStairs();
        System.out.println(st.Steps(n));
    }
}
