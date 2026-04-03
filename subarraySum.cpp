class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         // 哈希表：key = 前缀和，value = 该前缀和出现的次数
        unordered_map<int, int> prefixMap;
        // 初始化：前缀和为 0 出现 1 次（处理从数组开头就满足条件的子数组）
        prefixMap[0] = 1;
        
        int currentSum = 0; // 当前前缀和
        int count = 0;      // 统计符合条件的子数组数量
        
        for (int num : nums) {
            currentSum += num; // 累加得到当前前缀和
            
            // 核心：如果 currentSum - k 存在，说明有子数组和为 k
            if (prefixMap.find(currentSum - k) != prefixMap.end()) {
                count += prefixMap[currentSum - k];
            }
            
            // 把当前前缀和加入哈希表
            prefixMap[currentSum]++;
        }
        
        return count;

    }
};
