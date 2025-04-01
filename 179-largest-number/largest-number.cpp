class Solution {
public:
    static bool comp(string a, string b){
        
            return (a+b)<(b+a);
       
    }
    string largestNumber(vector<int>& nums) {
        string ans="";
        //string is sorted in lexicographical order
        vector<string>snums;
        for(int i=0;i<nums.size();i++){
            snums.push_back(to_string(nums[i]));
        }
        sort(snums.begin(), snums.end(), comp);
        for(int i=nums.size()-1;i>=0;i--){
            ans=ans+snums[i];
        }
        
        while(ans.size()>1 && ans[0]=='0'){
            ans.erase(0,1);
            cout<<ans<<endl;
        }
        
        return ans;
    }
};