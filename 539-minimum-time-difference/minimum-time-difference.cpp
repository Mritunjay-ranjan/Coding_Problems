class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>timePointsInt;
        for(int i=0;i<timePoints.size();i++){
            timePointsInt.push_back(stoi((timePoints[i].substr(0,2)))*60 + stoi((timePoints[i].substr(3,2))));
        }
        sort(timePointsInt.begin(),timePointsInt.end());
        int ans = timePointsInt[0]+(24*60)-(timePointsInt[timePointsInt.size()-1]);
        for(int i=0;i<timePointsInt.size()-1;i++){
            ans = min(ans, timePointsInt[i+1]-timePointsInt[i]);
        }
        return ans;
    }
};