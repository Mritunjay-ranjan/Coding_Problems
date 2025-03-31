class Solution {
public:
    int compress(vector<char>& chars) {
        int j = 0;  // j will mark the beginning of each group
        while(j < chars.size()){
            int i = j + 1; 
            // Move i until a different character is found
            while(i < chars.size() && chars[i] == chars[j]) {
                i++;
            }
            int count = i - j;  // count of the current group
            if(count > 1){
                // Erase the extra copies, leaving only one instance at index j
                chars.erase(chars.begin() + j + 1, chars.begin() + i);
                // Convert count to string and insert its digits after the character at j
                string cnt = to_string(count);
                for (int k = 0; k < cnt.size(); k++){
                    chars.insert(chars.begin() + j + 1 + k, cnt[k]);
                }
                // Move j past the character and the inserted count digits
                j = j + 1 + cnt.size();
            } else {
                // No compression needed, just move to the next character
                j++;
            }
        }
        return chars.size();
    }
};
