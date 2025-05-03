class Solution {
public:
    void addStringsR(string& num1, int p1, string& num2, int p2, int carry, string& ans){
        //base case
        if(p1<0 && p2<0){
            if(carry!=0){
                ans = char(carry+'0') + ans;
            }
            return;
        }

        int n1 = p1<0? 0: num1[p1]-'0';
        int n2 = p2<0? 0: num2[p2]-'0';
        int sum = n1 + n2 + carry;
        ans = char('0'+sum%10)+ans;
        carry = sum/10;
        addStringsR(num1, p1-1, num2, p2-1, carry, ans);
        return;
    }

    string addStrings(string num1, string num2) {
        string ans = "";
        addStringsR(num1, num1.size()-1, num2, num2.size()-1, 0, ans);
        return ans;
    }
};