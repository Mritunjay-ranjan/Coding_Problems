class Solution {
public:
    bool helper(vector<int> &count, vector<int> &quantity, int customerIndx){
        if(customerIndx==quantity.size()) return true;

        for(int i=0; i<count.size(); i++){
            if(count[i]>=quantity[customerIndx]){
                count[i]-=quantity[customerIndx];
                if(helper(count, quantity, customerIndx+1)){
                    return true;
                }
                count[i]+=quantity[customerIndx];
            }
        }
        return false;
    }

    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int,int> ump;
        sort(quantity.rbegin(), quantity.rend());
        for(auto num: nums){
            ump[num]++;
        }
        vector<int> count;
        for(auto mp: ump){
            count.push_back(mp.second);
        }
        int customerIndx = 0;
        return helper(count, quantity, customerIndx);
    }
};