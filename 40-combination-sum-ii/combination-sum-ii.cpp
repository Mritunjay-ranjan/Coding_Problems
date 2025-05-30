class Solution {
public:
    void helper(vector<int> &candidates, vector<vector<int>> &ans, vector<int> &v, int target, int index){
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(target<0){
            return;
        }

        for(int i=index; i<candidates.size(); i++){
            if(i>index && candidates[i]==candidates[i-1]){
                continue;
            }
            v.push_back(candidates[i]);
            helper(candidates, ans, v, target-candidates[i], i+1);
            v.pop_back();
        }
        return;
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(candidates.begin(), candidates.end());
        helper(candidates, ans, v, target, 0);
        // set<vector<int>>st;
        // for(auto i: ans){
        //     st.insert(i);
        // }
        // ans.clear();
        // for(auto i: st){
        //     ans.push_back(i);
        // }
        return ans;
    }
};