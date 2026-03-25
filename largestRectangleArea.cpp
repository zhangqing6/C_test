class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        heights.push_back(0); // 添加哨兵，确保遍历结束后栈中元素全部出栈
        int maxArea = 0;
        for (int i = 0; i < heights.size(); ++i) {
            // 当前高度小于栈顶高度，说明栈顶元素的右边界确定
            while (!st.empty() && heights[i] < heights[st.top()]) {
                int h = heights[st.top()];
                st.pop();
                // 宽度：当前索引 i 与 新栈顶索引 之间的距离
                int w = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea, h * w);
            }
            st.push(i);
        }
        return maxArea;
    }
};
