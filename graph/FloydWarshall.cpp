void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    int n=matrix.size();
	    int m=matrix[0].size();
	    for(int k=0;k<n;k++){
	        for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++){
	               if(matrix[i][k]==-1 || matrix[k][j]==-1){
	                   
	               }else{
	                   if(matrix[i][j]==-1){
	                       matrix[i][j]=matrix[k][j]+matrix[i][k];
	                   }else{
	                       matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
	                   }
	               }
	            }
	        }
	    }
	    return ;
	}
