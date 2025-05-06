class Solution {
public:
    void findMaxProfit(vector<int>& prices, int index, int& mini, int& maxProfit){
        //base case
        if(index==prices.size()){
            return;
        }
        if(prices[index]<mini){
            mini = prices[index];
        }
        else if((prices[index] - mini)>maxProfit){
            maxProfit = prices[index] - mini;
        }
        findMaxProfit(prices, index+1, mini, maxProfit);
    }

    int maxProfit(vector<int>& prices) {
        int index = 0;
        int mini = INT_MAX;
        int maxProfit = 0;
        findMaxProfit(prices, index, mini, maxProfit);
        return maxProfit;
    }
};