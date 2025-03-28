class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int m = -1;
        int p = -1;
        int g = -1;
        int i = garbage.size() - 1;
        while(i >= 0 && (p == -1 || m == -1 || g == -1)) {
            if(m == -1 && garbage[i].find('M') != string::npos)
                m = i;
            if(p == -1 && garbage[i].find('P') != string::npos)
                p = i;
            if(g == -1 && garbage[i].find('G') != string::npos)
                g = i;
            i--;
        }
        
        int total_time = 0;
        
        // Process metal truck from its last required house down to 0.
        while(m >= 0) {
            if(m > 0)
                total_time += travel[m - 1];  // Add travel time from house (m-1) to m.
            // Count all 'M' units in house m.
            for (char c : garbage[m])
                if(c == 'M')
                    total_time++;
            m--;
        }
        
        // Process glass truck.
        while(g >= 0) {
            if(g > 0)
                total_time += travel[g - 1];
            for (char c : garbage[g])
                if(c == 'G')
                    total_time++;
            g--;
        }
        
        // Process paper truck.
        while(p >= 0) {
            if(p > 0)
                total_time += travel[p - 1];
            for (char c : garbage[p])
                if(c == 'P')
                    total_time++;
            p--;
        }
        
        return total_time;
    }
};
