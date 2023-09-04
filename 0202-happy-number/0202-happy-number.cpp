class Solution {
public:
    int sumOfSquare(int num){
        int sum = 0;
        while(num != 0){
            int r = num%10;
            sum += r*r;
            num = num/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = sumOfSquare(n);
        while(fast != 1 && fast != slow){
            slow = sumOfSquare(slow);
            fast = sumOfSquare(sumOfSquare(fast));
        }
        return fast == 1;
    }
};