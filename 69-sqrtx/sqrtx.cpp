class Solution {
public:
    int mySqrt(int x) {
        long long sqr = 0;
        int i=0;
        int j;
        if(x>1){
        j=x/2;
        }
        else{
        j=x;
        }
        int ans=-1;
        while(i<=j){
            long long mid=i+(j-i)/2;
            sqr=mid*mid;

            if(sqr<=x){
                i=mid+1;
                ans=mid;
            }
            else{
                j=mid-1;
            }
        }
        return ans;
    }
};