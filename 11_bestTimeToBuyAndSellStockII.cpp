class Solution {
public:
    int maxProfit(vector<int>& a) {
        int mini = a[0];
        int profit=0;
        for(int i=1;i<a.size();i++){
            if(a[i]<mini) 
                mini = a[i];
            else if(a[i]>mini) {
                profit+= a[i] - mini;
                mini = a[i];
            }
        }
        return profit;
    }
};

// or

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
        
//         int least = prices[0];
//         int profit = 0;

//         int i;
//         for(i=1;i<n-1;i++){

//             if (prices[i]<least){
//                 least = prices[i];
//                 continue;
//             }

//             if(prices[i]>least && prices[i+1]<prices[i]){
//                 profit+= prices[i] - least;
//                 least = prices[i+1];
//                 i++;
//                 continue;
//             }
//             else if(prices[i]>least && prices[i+1]>prices[i]){
//                 continue;
//             }
//         }

//         if(i<n && least<prices[i])
//             profit+= prices[i] - least;

//         return profit;

//     }
// };
