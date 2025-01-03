class MaximizeSum {
    public int maximizeSum(int[] nums, int k) {
        int n= nums.length;
        int max=Integer.MIN_VALUE;

        for(int i=0; i<n; i++){
            if(nums[i] > max){
                max=nums[i];
            }
        }

        int sum=0;
        for(int i=0; i<k; i++){
            sum+=max+i;
        }
        
        return sum;
    }
}