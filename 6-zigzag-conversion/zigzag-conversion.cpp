class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        string ans="";
        vector<string>zig(numRows);
        int i=0;
        int j=0;
        while(j<s.length()){
            if(j==0){
                while(j<s.length() && i<numRows){
                    zig[i].push_back(s[j]);
                    j++;
                    i++;
                }
                j--;
                i--;
            }
            else if(i==numRows-1){
                while(((j+1)<s.length()) && (i-1)>=0){
                    i--;
                    j++;
                    zig[i].push_back(s[j]);
                }
            }
            else{
                while(((j+1)<s.length()) && (i+1)<numRows){
                    i++;
                    j++;
                    zig[i].push_back(s[j]);
                }
            }
            if(j==s.length()-1){
                break;
            }
        }
        for(int i=0;i<numRows;i++){
            ans=ans+zig[i];
        }
        return ans;
    }
};