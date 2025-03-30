class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
       
        if(s.length() != t.length()) return false;
        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        // int count[300] = {0};
        // for(auto ch : t){
        //     count[ch] += 1;
        // }
        
        // int j;
        // for(int i = 0; i < s.size(); i++){
        //     int s_count = 0;
        //     j=0;
            
        //     for(auto ch : s){
        //         if(s[i] == ch){
        //             s_count += 1;
        //         }
        //     }

        //     if(s_count != count[s[i]]){
        //         return false;
        //     }
        // }
        return true;
    }
};
