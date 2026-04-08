class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n, 1);   // 前缀乘积
        vector<int> suf(n, 1);   // 后缀乘积
        vector<int> ans(n);

        // 1. 计算前缀：pre[i] = nums[0]~nums[i-1] 的乘积
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i-1] * nums[i-1];
        }

        // 2. 计算后缀：suf[i] = nums[i+1]~nums[n-1] 的乘积
        for (int i = n-2; i >= 0; i--) {
            suf[i] = suf[i+1] * nums[i+1];
        }

        // 3. 结果 = 左 × 右
        for (int i = 0; i < n; i++) {
            ans[i] = pre[i] * suf[i];
        }

        return ans;
    }
};
