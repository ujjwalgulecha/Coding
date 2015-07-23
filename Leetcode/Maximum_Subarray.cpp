
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i;
        int len = nums.size();
        if(len==1)return nums[0];
        int neg=1;
        int maxi=nums[0];
        for(i=0;i<len;i++)
        {
            if(nums[i]>=0){neg=0;}
            if(nums[i]>maxi)maxi=nums[i];
        }
        if(neg)return maxi;
        int sum=0,ans=0;
        for(i=0;i<len;i++)
        {
            sum+=nums[i];
            if(sum<0)
            {
                sum=0;
            }
            if(sum>ans)ans=sum;
        }
        return ans;
    }
};
