void bfs(vector<vector<int>>& grid,int i,int j,vector<vector<bool>>& visited){
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int,int>> q;;
        q.push({i,j});
        visited[i][j] = true;

        while(q.empty()!=true){
            pair<int,int> p = q.front();
            q.pop();
            for(int x = -1 ;x<=1;x++){
                for(int y=-1;y<=1;y++){
                    if(abs(x-y)==1){

                        int f = p.first+x;
                        int s= p.second+y;
                        if(f>=0 && f<m && s>=0 && s<n && grid[f][s]==1 && !visited[f][s] ){
                            visited[f][s]=true;
                            q.push({f,s});
                        }
                    }
                }
            }
        }
    }
