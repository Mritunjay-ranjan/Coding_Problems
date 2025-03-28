class Solution {
public:
    string customSortString(string order, string s) {
        int i=0;
        for(int j=0;j<order.length();j++){
            while(i<s.length() && s.find(order[j],i)!=string::npos){
                swap(s[i],s[s.find(order[j],i)]);    
                i++;
            }
        }
        return s;
    }
};