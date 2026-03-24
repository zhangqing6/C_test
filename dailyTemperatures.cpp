class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n);
        vector<int> st;
        
        for(int i=n-1;i>=0;i--){
            int x=temperatures[i];
            while(!st.empty()&&x>=temperatures[st.back()]){
                st.pop_back();
            }
            if(!st.empty()){
                ans[i]=st.back()-i;
            }
            st.push_back(i);
        }
        return ans;
    }
};
