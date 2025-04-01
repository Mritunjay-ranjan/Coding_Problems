class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int j=1;

        while(i<chars.size()){
            j= i+1;
            while(j<chars.size() && chars[i]==chars[j]){
                j++;
            }
            if(j-i>1){
                chars.erase(chars.begin()+i+1,chars.begin()+j);
                string count = to_string(j-i);
                int k = count.size();
                for(int a=0;a<k;a++){
                    chars.insert(chars.begin()+i+1+a, count[a]);
                }
                i=i+1+k;
            }
            else{
                i++;
            }
        }
        return chars.size();
    }
};