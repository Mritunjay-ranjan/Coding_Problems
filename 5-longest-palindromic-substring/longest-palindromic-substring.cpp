class Solution {
public:
    string longestPalindrome(string s) {
        string longPali ="";
        if(s.length()==1){
            return s;
        }
        int count_i;
        int count_j;
        for(int i=0;i<s.length();i++){
            
            for(int j=i;j<s.length();j++){
                count_i = i;
                count_j = j;
                while(count_i<=count_j){
                    if(s[count_i]!=s[count_j]){
                        break;
                    }
                    count_i++;
                    count_j--;
                    if(count_i>=count_j && (s.substr(i,(j-i)+1)).length()>longPali.length()){
                        longPali = s.substr(i,(j-i)+1);
                    }
                }
            }
        }
        return longPali;
    }
};