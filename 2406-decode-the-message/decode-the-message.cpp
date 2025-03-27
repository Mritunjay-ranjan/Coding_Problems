class Solution {
public:
    string decodeMessage(string key, string message) {
        char mapping[300]={0};
        string ans;
        char start = 'a';
        for(auto ch: key){
            if(mapping[ch]=='\0' and ch!=' '){
            mapping[ch]= start;
            start++;
            }
        }
        for(auto ch: message){
            if(ch==' '){
                ans.push_back(' ');
            }
            else
            ans.push_back(mapping[ch]);
        }
        return ans;
    }
};