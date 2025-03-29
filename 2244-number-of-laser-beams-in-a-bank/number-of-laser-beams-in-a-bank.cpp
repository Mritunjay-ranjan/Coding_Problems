class Solution {
public:
    int lasers(vector<string>& bank, int currentRow, int nextRow){
        int i=0;
        int j=0;
        for(auto ch: bank[currentRow]){
            if(ch=='1'){
                i++;
            }
        }
        for(auto ch: bank[nextRow]){
            if(ch=='1'){
                j++;
            }
        }
        return i*j;
    }
    int numberOfBeams(vector<string>& bank) {
        int beams = 0;
        int i=0;
        while(i<bank.size()-1){
            int nextRow = i+1;
            while(nextRow<bank.size() && bank[nextRow].find('1')==string::npos){
                nextRow++;
            }
            if(nextRow>=bank.size() || bank[nextRow].find('1')==string::npos){
                break;
            }
            beams += lasers(bank,i,nextRow);
            i=nextRow;
        }
        return beams;
    }
};