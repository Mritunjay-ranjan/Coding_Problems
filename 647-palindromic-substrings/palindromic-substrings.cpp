class Solution {
public:
    
    int expand(string s, int i, int j){
        int count = 0;
        while(i>=0 && j<=(s.length()-1) && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int count=0;
        for(int center=0;center<s.length();center++){
            int oddAns = expand(s, center, center);
            int evenAns = expand(s, center, center+1);
            count+= (oddAns + evenAns);
        }
        return count;
    }
};