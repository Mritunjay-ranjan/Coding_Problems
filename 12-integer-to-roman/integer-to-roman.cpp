class Solution {
public:
    string intToRoman(int num) {
        int k = 1;
        string ans = "";
        int digit = 0;
        while(num != 0) {
            digit = num % 10;
            num /= 10;
            digit *= k;
            string temp = "";
            if(digit == 9 * k) {
                // Special case for 9: 9, 90, 900
                if(k == 1)
                    temp = "IX";
                else if(k == 10)
                    temp = "XC";
                else if(k == 100)
                    temp = "CM";
            }
            else if(digit == 4 * k) {
                // Special case for 4: 4, 40, 400
                if(k == 1)
                    temp = "IV";
                else if(k == 10)
                    temp = "XL";
                else if(k == 100)
                    temp = "CD";
            }
            else {
                // For values other than 4's and 9's, build the numeral
                while(digit > 0) {
                    if(k == 1) {
                        if(digit >= 5) {
                            temp += 'V';
                            digit -= 5;
                        } else {
                            temp += 'I';
                            digit -= 1;
                        }
                    }
                    else if(k == 10) {
                        if(digit >= 50) {
                            temp += 'L';
                            digit -= 50;
                        } else {
                            temp += 'X';
                            digit -= 10;
                        }
                    }
                    else if(k == 100) {
                        if(digit >= 500) {
                            temp += 'D';
                            digit -= 500;
                        } else {
                            temp += 'C';
                            digit -= 100;
                        }
                    }
                    else if(k == 1000) {
                        temp += 'M';
                        digit -= 1000;
                    }
                }
            }
            // Prepend the converted group to the answer.
            ans = temp + ans;
            k *= 10;
        }
        return ans;
    }
};