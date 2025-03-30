class Solution {
public:
    string normalise(string t){
        char start = 'a';
        char alphabet[300]={0};
        for(auto ch: t){
            if(alphabet[ch]=='\0'){
                alphabet[ch]=start;
            }
            start++;
        }
        for(int i=0;i<t.length();i++){
            t[i] = alphabet[t[i]];
        }
        return t;
    }
    bool isIsomorphic(string s, string t) {
        string normalisedT = normalise(t);
        string normalisedS = normalise(s);
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            if(normalisedT[i]!=normalisedS[i]) return false;
        }
        return true;
    }
};