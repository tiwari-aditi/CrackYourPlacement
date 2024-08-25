class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        int check = nums[0];
        int uniqCount = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=check){
                nums[++index] = nums[i];
                uniqCount++;
                check = nums[i];
            }
        }
    
        return uniqCount;  
    }
};
