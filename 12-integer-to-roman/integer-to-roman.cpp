class Solution {
public:
    string intToRoman(int num) {
        string ans="";
        int digit=0;
        int k=1;
        while(num!=0){
            string temp="";
            digit=num%10;
            digit*=k;
            num/=10;
            if(digit==4*k){
                if(digit==4){
                    temp="IV";
                }
                else if(digit==40){
                    temp="XL";
                }
                else{
                    temp="CD";
                }
            }
            else if(digit==9*k){
                if(digit==9){
                    temp="IX";
                }
                else if(digit==90){
                    temp="XC";
                }
                else{
                    temp="CM";
                }
            }
            else{
                while(digit){
                    if(k==1){
                        if(digit>=5){
                            temp+="V";
                            digit-=5;
                        }
                        else{
                            temp+="I";
                            digit-=1;
                        }
                    }
                    else if(k==10){
                        if(digit>=50){
                            temp+="L";
                            digit-=50;
                        }
                        else{
                            temp+="X";
                            digit-=10;
                        }
                    }
                    else if(k==100){
                        if(digit>=500){
                            temp+="D";
                            digit-=500;
                        }
                        else{
                            temp+="C";
                            digit-=100;
                        }
                    }
                    else if(k==1000){
                        if(digit>=1000){
                            temp+="M";
                            digit-=1000;
                        }
                    }
                }
            }
            ans=temp+ans;
            k*=10;
        }
        return ans;
    }
};