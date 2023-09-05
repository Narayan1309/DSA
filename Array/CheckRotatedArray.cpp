class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i=1;i<nums.size();i++) 
        {
            if(nums[i] < nums[i-1])
                count++;
        }
        if(nums[nums.size()-1] > nums[0])  //if there is normal sorted array then its last digit is greater than 1st
            count++;
        
        return count<=1;  //we didn't return true only for 1      it will miss the case when all elements in array are equal in that case count will be zero.
    }
};
