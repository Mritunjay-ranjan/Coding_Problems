class Solution {
public:
    string removeDuplicates(string s, int k) {
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(ans.length()>=(k-1)){
                int count=0;
                bool flag = 0;
                while(count<(k-1)){
                    if(ans[ans.length()-1-count]==s[i]){
                        count++;
                    }
                    else{
                        flag = 1;
                        break;
                    }
                }
                if(flag){
                    ans.push_back(s[i]);
                }
                else{
                    count =0;
                    while(count<k-1){
                    ans.pop_back();
                    count++;
                    }
                } 
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};