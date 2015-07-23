class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ct=0;
        for(int i=0;i<32;i++)
        {
            ct+=(n&1);
            n=n>>1;
        }
        return ct;

    }
};
