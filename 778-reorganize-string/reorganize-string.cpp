class Solution {
public:
    string reorganizeString(string s) {
        int hash[26]={0};
        for(auto ch: s){
            hash[ch-'a']++;
        }
        int max_freq = INT_MIN;
        char max_freq_char;
        for(int i=0;i<s.length();i++){
            if(hash[s[i]-'a']>max_freq){
                max_freq = hash[s[i]-'a'];
                max_freq_char = s[i];
            }
        }
        int i=0;
        while(max_freq>0 && i<s.length()){
            s[i]=max_freq_char;
            i=i+2;
            hash[max_freq_char-'a']--;
            max_freq--;
        }

        if(max_freq){
            return "";
        }
        for(int j=0;j<26;j++){
            while(hash[j]){
                i = i>=s.length()? 1:i;
                s[i]=j+'a';
                hash[j]--;
                i+=2;
            }
        }

        return s;
    }
};