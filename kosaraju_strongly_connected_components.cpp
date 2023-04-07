void dfs(vector<vector<int>>& adj,int source,stack<int>& st,vector<bool>& visited){
	    
	    visited[source]=true;
	    for(int ch:adj[source]){
	        if(!visited[ch]){
	            dfs(adj,ch,st,visited);
	        }
	    }
	    st.push(source);
	}
	
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //code here
        vector<bool> visited(V+1,0);
        stack<int> st;
        for(int i=0;i<V;i++){
            if(!visited[i])
                dfs(adj,i,st,visited);
        }

        
        
        fill(visited.begin(),visited.end(),false);
        stack<int> st1;
        vector<vector<int>> list(V+1);
        for(int i=0;i<V;i++){
            for(auto j:adj[i]){
                list[j].push_back(i);
            }
            
        }
        
        int count =0;
        while(st.empty()==false){
            int i =st.top();
            st.pop();
            if(!visited[i]){
                dfs(list,i,st1,visited);
                count++;
            }
        }
        return count;
        return 0;
    }
