class Solution {
public:
    int longestSubarray(vector<int>& nums)
    {
        int i, len = nums.size(), max_ele = 0, clen = 0, ans = 0;
        for(i = 0; i < len; i++)
        {
            if(nums[i] > max_ele)
            {
                max_ele = nums[i];
            }
        }
        for(i = 0; i < len; i++)
        {
            if(nums[i] == max_ele)
            {
                clen++;
            }
            else
            {
                ans = max(ans, clen);
                clen = 0;
            }
        }
        return max(ans, clen);
    }
};
