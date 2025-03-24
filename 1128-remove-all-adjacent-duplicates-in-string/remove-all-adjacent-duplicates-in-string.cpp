class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int j=-1;
        for(int i=0;i<s.length();i++){
            if(j==-1){
                j++;
                ans.push_back(s[i]);
                continue;
            }
            if(ans[j]!=s[i]){
                ans.push_back(s[i]);
                j++;
            }
            else{
                ans.pop_back();
                j--;
            }
            }
            return ans;
        }
        
};