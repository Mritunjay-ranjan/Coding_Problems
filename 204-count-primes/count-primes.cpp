class Solution {
public:
    int countPrimes(int n) {
        if(n==0) return 0;
        vector<bool>prime(n,true);
        prime[0]=prime[1]=false;
        int ans=0;
        for(int i=2;i<n;i++){
            int j=2;
            if(prime[i]){
                ans++;
                while(i*j<n){
                    prime[i*j]=false;
                    j++;
                }
            }
        }
        return ans;
    }
};