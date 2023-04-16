int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        pq.push({0,0});
        vector<bool> vis(V,false);
        int res=0;
        while(pq.empty()==false){
            pair<int,int> pr=pq.top();
            pq.pop();
            if(vis[pr.second]==true){
                continue;
            }
            vis[pr.second]=true;
            res+=pr.first;
            
            for(auto edges:adj[pr.second]){
                // for(auto edges:ngb){
                    pq.push({edges[1],edges[0]});
                // }
            }
        }
        return res;
        
        
    }
