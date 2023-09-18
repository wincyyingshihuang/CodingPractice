class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 1) return 0;
        int min=prices[0];
        int max=prices[0];
        int inte = 0;
        int total = 0;
        for (int i=0; i<prices.size(); i++){
            if (prices[i]>max){
                max = prices[i];
                if (i==prices.size()-1){
                    inte = max - min;
                    total += inte;
                }
            }
            else{
                inte = max - min;
                total += inte;
                max = prices[i];
                min = prices[i];
            }
        }
        return total;
    }
};
