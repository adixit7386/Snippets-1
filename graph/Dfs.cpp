void dfsRec(vector<int> adj[],vector<bool> &vis,int s,vector<int> &ans){
        vis[s]=true;
        ans.push_back(s);
        
        for(auto vertex:adj[s]){
            if(vis[vertex]==false){
                dfsRec(adj,vis,vertex,ans);
            }
        }
        return ;
        
        
}
