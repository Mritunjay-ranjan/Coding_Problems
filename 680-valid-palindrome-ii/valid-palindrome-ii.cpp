class Solution {
public:
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        int k=0;
        int i1=0;
        int j1=s.length()-1;
        if(s.length()<=2){
            return true;
        }
        while(i<=j){
            if(s[i]!=s[j]){
                i1 = i;
                j1 = j;
                if(k){
                    return false;
                }
                while(i<=j && s[i]==s[j-1] && s[i+1]==s[j]){
                    i++;
                    j--;
                }
                if(s[i]==s[j-1]){
                    s.erase(j1,1);
                }
                else
                s.erase(i1,1);
                i=0;
                j=s.length()-1;
                k++;
            }
            else{
            j--;
            i++;
            }
        }
        return true;
    }
};