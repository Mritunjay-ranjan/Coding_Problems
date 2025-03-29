class Solution {
public:
    bool checkPattern(string word, string pattern){
        char cha[300]={0};
        int i=0;
        for(auto ch: pattern){
            if (find(cha, cha + 300, word[i]) == cha + 300)
            cha[ch]=word[i];
            i++;
        }
        i=0;
        for(auto ch: pattern){
            if(cha[ch]!=word[i]){
                return false;
            }
            i++;
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        for(int i=0;i<words.size();i++){
            if(!checkPattern( words[i], pattern)){
                words.erase(words.begin()+i);
                i--;
            }
        }
        return words;
    }
};