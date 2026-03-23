class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        // vector<int> res;
        // int n=prices.size();
        // for(int i=0;i<n-1;++i)
        // {
        //     int j=i+1;
        //     while(j<=n-1)
        //     {
        //         if(prices[i]>=prices[j])
        //         {
        //             break;
        //         }
        //         ++j;
        //     }
        //     if(j==n)
        //     {
        //         res.push_back(prices[i]);
        //     }
        //     else
        //     {
        //         res.push_back(prices[i]-prices[j]);
        //     }
           
        // }
        // res.push_back(prices[n-1]);
        // return res;
        int n = prices.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() > prices[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? prices[i] : prices[i] - st.top();
            st.emplace(prices[i]);
        }
        return ans;
    }
};
