class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        backtracking(0, new ArrayList<Integer>(), result, nums);
        return result;
    }
    
    public void backtracking(int index, List<Integer> currentSubset, List<List<Integer>> result, int[] nums){
        result.add(new ArrayList(currentSubset));

        for(int i=index;i<nums.length;i++){
            if(i!=index && nums[i]==nums[i-1]){
                continue;
            }
            currentSubset.add(nums[i]);
            backtracking(i+1, currentSubset, result, nums);
            currentSubset.remove(currentSubset.size()-1);
        }
    }
}