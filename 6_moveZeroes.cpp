class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; //keeping track of non-zero index position
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
};
