class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0;
        int k;
        if(haystack.length()<needle.length()){
            return -1;
        }
        for(int i=0;i<=(haystack.length()-needle.length());i++){
            k=i;
            while(haystack[k]==needle[j]){
                if(j==needle.length()-1) return i;
                k++;
                j++;
            }
                j=0;
            
        }
        return -1;
    }
};