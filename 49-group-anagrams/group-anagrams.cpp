class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        vector<string>copy;
        for(int i=0;i<strs.size();i++){
            copy.push_back(strs[i]);
        }
        for(int i=0;i<strs.size();i++){
            sort(strs[i].begin(),strs[i].end());
        }
        
        for(int i=0;i<strs.size();i++){
            if (strs[i] == "111") continue;

            // Start a new group by pushing back a new vector.
            ans.push_back(vector<string>());
            ans.back().push_back(copy[i]);

            for(int j=i+1;j<strs.size();j++){
                if(strs[j]!="111" && strs[i]==strs[j]){
                    ans.back().push_back(copy[j]);
                    strs[j]="111";
                }
            }
        }
        
        return ans;
    }
};