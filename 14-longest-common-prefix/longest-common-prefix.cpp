class Solution {
public:
    static bool max_length(string a, string b){
        return a.length()>b.length();
    }
    string longestCommonPrefix(vector<string>& strs) {
        string short_str = *max_element(strs.begin(),strs.end(),max_length);
        int i=0;
        int j= short_str.length()-1;
        while(i<=j){
        for(auto ch: strs){
            if(short_str[i]!=ch[i]){
                if(i==0){
                    return "";
                }
                return short_str.substr(0,i);
            }
        }
        i++;
        }
        return short_str;
    }
};