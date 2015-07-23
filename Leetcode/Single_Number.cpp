
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int len = nums.size();
        if(len==1)return nums[0];
        int s=nums[0];
        for(int i=1;i<len;i++)s^=nums[i];

        return s;

    }
};
