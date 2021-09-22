#include <stdio.h>
int minDistance(int dist[],bool sptSet[],int n)
{
       
    int min =100000;
    int min_index;
   
    for (int v = 0; v < n; v++){
         if (sptSet[v] == false &&dist[v] <= min)
            min = dist[v];
            
            min_index=v;
    }
       
   
   
   
    return min_index;
}

int dijkstra(int graph[100][100],int source,int n){
    int dist[n];
    bool sptSet[n];
    
    int parentgraph[n];  ////stores krega 
   
    dist[source]=0;
    for(int i=1;i<n;i++)
    { 
        parentgraph[0]=0;
        dist[i]=100000;
        sptSet[i]=false;
        
    }
    for (int phase = 0; phase < n - 1; phase++)
    {
    
        int u = minDistance(dist, sptSet,n);
        
        sptSet[u] = true;
        for(int v=0; v<n;v++){
            if(!sptSet&&graph[u][v]&&(dist[u] + graph[u][v]) < dist[v])
        
           {
                parentgraph[v] = u;
                dist[v] = dist[u] + graph[u][v];
           } 
      
        }
        
            
    }
    return 0;
}

int main()
{
    printf("\nApoorv Joshi\nA023116119009\n");
    printf("\n no vertex\n");
    int n;
    scanf("%d",&n);
	int graph[n][n];
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        scanf("%d",&graph[i][j])
	        
	    }
	}
    
    
    dijkstra(graph, 0,n);
	return 0;
}
