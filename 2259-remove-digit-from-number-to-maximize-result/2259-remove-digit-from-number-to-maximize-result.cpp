class Solution {
public:
    string removeDigit(string number, char digit) {
        for(int i=0;i<number.length()-1;i++){
            if(number[i] == digit && number[i+1] > digit){
                return number.erase(i,1);
            }
        }
        int ind = number.rfind(digit);
        return number.erase(ind,1);
    }
};