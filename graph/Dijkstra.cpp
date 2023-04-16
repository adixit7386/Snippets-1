vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,S});
        vector<int> dist(V,INT_MAX);
        
        dist[S]=0;
        while(pq.empty()==false){
            pair<int,int> pr=pq.top();
            pq.pop();
            int node=pr.second;
            int wt=pr.first;
            for(auto edges:adj[node]){
                if(dist[edges[0]]>wt+edges[1]){
                    
                    dist[edges[0]]=wt+edges[1];
                    pq.push({dist[edges[0]],edges[0]});
                }
            }
        }
        return dist;
    }
