class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int x = t;
        while(t != 0){
            num++;
            t--;
        }
        return x+num;
    }
};