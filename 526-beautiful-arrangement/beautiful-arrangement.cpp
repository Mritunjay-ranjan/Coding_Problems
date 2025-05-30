class Solution {
public:
    void helper(int n, vector<int> &ans, int num, int &count){
        if(num>n){
            count++;
            return;
        }
        for(int i=1;i<=n;i++){
            if(ans[i]==0 & ((num%i)==0 || (i%num)==0)){
                ans[i]=num;
                helper(n, ans, num+1, count);
                ans[i]=0;
            }
        }
    }

    int countArrangement(int n) {
        vector<int>ans(n+1,0);
        int num=1;
        int count=0;
        helper(n, ans, 1, count);
        return count;
    }
};