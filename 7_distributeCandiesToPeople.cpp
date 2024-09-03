class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int n = num_people;
        vector<int> ans(n, 0);
        int i = 0;
        int count = 1;

        while(candies>0 && count<=candies){
            ans[i%n] += count;
            candies -= count;
            count++;
            i++;
        }

        ans[i%n] += candies; 

        return ans;
        
    }
};
