vector<int> bellman_ford(int V, vector<vector<int>>& edges, int s) {
        // Code here
        vector<int> ans(V,100000000);
        ans[s]=0;
        for(int i=0;i<V-1;i++){
            for(auto edge:edges){
                ans[edge[1]]=min(ans[edge[1]],ans[edge[0]]+edge[2]);
            }
        }
        for(auto edge:edges){
            if(ans[edge[0]]+edge[2]<ans[edge[1]]){
                ans.clear();
                ans.push_back(-1);
                return ans;
            }
            
        }
        return ans;
        
    }
