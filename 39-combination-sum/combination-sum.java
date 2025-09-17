class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> current = new ArrayList<>();
        backtracking(0, current, candidates, target, result);
        return result;
    }
    public void backtracking(int index, List<Integer> current, int[] candidates, int target, List<List<Integer>> result){
        if(target==0){
            result.add(new ArrayList<Integer>(current));
            return;
        }
        else if(target<0){
            return;
        }
        for(int i=index;i<candidates.length;i++){
            current.add(candidates[i]);
            backtracking(i, current, candidates, target-candidates[i], result);
            current.remove(current.size()-1);
        }
    }
}