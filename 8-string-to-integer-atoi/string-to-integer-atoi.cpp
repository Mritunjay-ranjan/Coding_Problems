class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        long long ans=0;
        int i=0;
        int k=10;
        while(i<s.length()){
            if(i==0){
                while(i<s.length() && s[i]==' '){
                    i++;
                }
                if(s[i]=='-'){
                    sign = -1;
                    i++;
                }
                else if(s[i]=='+'){
                    i++;
                }

                while(i<s.length() && s[i]==0){
                    i++;
                }
            }
            if(s[i]>=48 && s[i]<=57){
                ans*=k;
                ans+=(s[i]-48);
                if(ans>=INT_MAX){
                    if(sign<0){
                        if(ans==INT_MAX) return ans*sign;
                        return INT_MIN;
                    }
                    else{
                        return INT_MAX;
                    }
                }
            }
            else{
                return ans*sign;
            }
            i++;
        }
        return ans*sign;
    }
};