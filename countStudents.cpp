class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        stack<int>st;
        for(int i:students){
            q.push(i);
        }
        for(int i=sandwiches.size()-1;i>=0;i--){
            st.push(sandwiches[i]);
        }
        int count=0;
        while(!q.empty()&&count<q.size()){
            if(q.front()==st.top()){
                q.pop();
                st.pop();
                count=0;
            }else{
                  q.push(q.front());
                  q.pop();
                  count++;
            }
        }
        return q.size();
    }
};
