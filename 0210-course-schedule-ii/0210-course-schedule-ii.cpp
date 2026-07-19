class Solution {
public:
    bool isCycle(int src, vector<bool>& vis, vector<bool>& recPath, vector<vector<int>>& edges) {
        vis[src] = true;
        recPath[src] = true;
        for (int i = 0; i < edges.size(); i++) {
            int v = edges[i][0];
            int u = edges[i][1];
            if (src == u) {
                if (!vis[v]) {
                    if (isCycle(v, vis, recPath, edges)) {
                        return true;
                    } 
                }
                else if (recPath[v]) {
                    return true;
                }
            }
        }
        recPath[src] = false;
        return false;
    }

    void topologicalOrder(int src, vector<bool>& vis, stack<int>& s, vector<vector<int>>& edges) {
        vis[src] = true;
        for (int i = 0; i < edges.size(); i++) {
            int v = edges[i][0];
            int u = edges[i][1];
            if (src == u) {
                if (!vis[v]) {
                    topologicalOrder(v, vis, s, edges);
                }
            }
        }
        s.push(src);
    }

    vector<int> findOrder(int n, vector<vector<int>>& edges) {
        vector<bool> vis(n, false);
        vector<bool> recPath(n, false);
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                if (isCycle(i, vis, recPath, edges)) {
                    return ans;
                }
            }
        }
        stack<int> s;
        vis.assign(n, false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                topologicalOrder(i, vis, s, edges);
            }
        }
        while(s.size()>0){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna