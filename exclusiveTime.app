class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int>result(n,0);
         stack<pair<int, int>> st;
         for (const string& log : logs) {
            // 解析日志: "function_id:start/end:timestamp"
            size_t first_colon = log.find(':');
            size_t second_colon = log.find(':', first_colon + 1);
            
            int id = stoi(log.substr(0, first_colon));
            string type = log.substr(first_colon + 1, second_colon - first_colon - 1);
            int timestamp = stoi(log.substr(second_colon + 1));
            
            if (type == "start") {
                // 如果栈不为空，说明有函数正在执行，需要先暂停当前函数
                if (!st.empty()) {
                    // 当前栈顶函数执行了从它的开始时间到当前时间的一部分
                    int prev_id = st.top().first;
                    int prev_start = st.top().second;
                    result[prev_id] += timestamp - prev_start;
                }
                // 将新函数压栈
                st.push({id, timestamp});
            } 
            else {  // type == "end"
                // 结束函数，弹出栈顶
                int start_time = st.top().second;
                st.pop();
                // 计算当前函数的执行时间（结束时间戳是末尾，所以要+1）
                result[id] += timestamp - start_time + 1;
                
                // 如果栈不为空，更新栈顶函数的开始时间为当前时间+1
                if (!st.empty()) {
                    st.top().second = timestamp + 1;
                }
            }
        }
        
        return result;
    }
};
