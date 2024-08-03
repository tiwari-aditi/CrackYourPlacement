class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Declare an unordered map to store the elements and their indices
        unordered_map<int, int> mp;
       
        for(int i= 0; i< nums.size(); i++){
            int curr= nums[i];
            int moreNeeded = target - curr;
            if(mp.find(moreNeeded) == mp.end()){
                mp[curr] = i;
            }
            else{
                return {i,mp[moreNeeded]};
            }
        }
 
        // If no pair is found, return {-1, -1} as a default value
        return {-1, -1};
    }
};
