class  SortArrayByParity{
    public int[] sortArrayByParity(int[] nums) {
      //  List<Integer> list= new ArrayList<>();
        int odd=nums.length-1;
        int even=0;
        int count=0;
        int ans[]=new int[nums.length];

        while(count<nums.length){
            if(nums[count] % 2 ==0){
                //odd
                ans[even]=nums[count];
                even++;
                count++;
            }
            else{
                //even
                ans[odd] =nums[count];
                odd--;
                count++;
            }

        }
        return ans;

    }
}