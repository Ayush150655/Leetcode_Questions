class Solution {
public:
    int countDigits(int num) {
        int temp = num;
        int c = 0;
        while(temp != 0){
            int r = temp%10;
            if(num % r == 0){
                c++;
            }
            temp = temp/10;
        }
        return c;
    }
};