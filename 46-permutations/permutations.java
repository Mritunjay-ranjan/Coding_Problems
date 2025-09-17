class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> currPermutation = new ArrayList<>();
        boolean[] used = new boolean[nums.length];
        backtracking(result, currPermutation, used, nums);
        return result;
    }

    public void backtracking(List<List<Integer>> result, List<Integer> currPermutation, boolean[] used, int[] nums){
        if(currPermutation.size()==nums.length) {
            result.add(new ArrayList<Integer>(currPermutation));
            return;
        }
        for(int i=0;i<nums.length;i++){
            if(!used[i]){
                currPermutation.add(nums[i]);
                used[i]=true;
                backtracking(result, currPermutation, used, nums);
                used[i]=false;
                currPermutation.remove(currPermutation.size()-1);
            }
        }
    }
}