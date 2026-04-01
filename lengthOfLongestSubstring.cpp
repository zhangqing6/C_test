class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_set<char> charSet;
        // 左指针，初始在窗口左侧
        int left = 0;
        int maxLen = 0;  // 记录最长子串长度

        // 右指针遍历整个字符串
        for (int right = 0; right < s.size(); ++right) {
            // 如果当前字符重复，移动左指针，删除重复字符
            while (charSet.find(s[right]) != charSet.end()) {
                charSet.erase(s[left]);
                left++;
            }
            // 将当前字符加入窗口
            charSet.insert(s[right]);
            // 更新最大长度：当前窗口长度 = right - left + 1
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
