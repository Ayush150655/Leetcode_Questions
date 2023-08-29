class Solution {
public:
    int bestClosingTime(string customers) {
        int result = 0;
        int bal = 0;
        for(int i=0;i<customers.length();i++){
            if(customers[i] == 'N'){
                bal++;
            }
            else{
                bal--;
                if(bal < 0){
                    result = i+1;
                    bal = 0;
                }
            }
        }
        return result;
    }
};