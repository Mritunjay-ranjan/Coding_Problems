class Solution {
public:
    string decodeMessage(string key, string message) {
        for(int i=0;i<key.length();i++){
            if(key[i]==' ') {
                key.erase(i,1);
                i--;
                continue;
            }
            for(int j=i-1;j>=0;j--){
                if(key[i]==key[j]){
                    key.erase(i,1);
                    i--;
                    break;
                }
            }
        }
        string alphabet;
        for(int i=0;i<26;i++){
            alphabet.push_back('a'+i);
        }
        for(int i=0;i<message.length();i++){
                if(message[i]==' '){
                    continue;
                }
                if(key.find(message[i])!=string::npos)
                message[i]= alphabet[key.find(message[i])];
            }
            return message;
    }
};