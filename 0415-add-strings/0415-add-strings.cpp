class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length()-1;
        int j = num2.length()-1;
        int carry = 0;
        string ans = "";
        while(i>=0 && j>=0){
            int sum = carry + (num1[i]-'0') + (num2[j]-'0');
            ans = ans + to_string(sum%10);
            carry = sum/10;
            i--;
            j--;
        }
        while(i>=0){
            int sum = carry + (num1[i]-'0');
            ans = ans + to_string(sum%10);
            carry = sum/10;
            i--;
        }
        while(j>=0){
            int sum = carry + (num2[j]-'0');
            ans = ans + to_string(sum%10);
            carry = sum/10;
            j--;
        }
        if(carry > 0){
            ans = ans+to_string(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};