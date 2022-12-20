#include<bits/stdc++.h>
using namespace std;


bool dfs(int n, vector<int> &visited, vector<int> adj[],int node){
        if(n == 0) return true;
        visited[node] = 1;
        for(auto nbr: adj[node]){
            if(visited[nbr] == 0){
             if(dfs(n-1, visited, adj, nbr)){
                return true;
              }
            }
        }
        visited[node] = 0;
        return false;
}
    
bool check(int N,int M,vector<vector<int>> Edges)
    {
       vector<int> adj[N];
       for(auto i: Edges){
           adj[ i[0] - 1].push_back(i[1] - 1);
           adj[ i[1] - 1].push_back(i[0] - 1);
       }
       vector<int> visited(N, 0);
       
       for(int i = 0;i<N;i++){
           if(dfs(N-1, visited, adj, i)){
               return true;
           }
       }
       return false;
    }
 

int main()
{
	
    int N,M,u,v;
    cout<<"Enter no. of Nodes and Edges"<<endl;
    cin>>N>>M;
    vector<vector<int>> Edges;
    cout<<"Enter u and v"<<endl;
    for(int i=0;i<M;i++)
    {
    	cin>>u>>v;
    	Edges.push_back({u,v});
    }
    if(check(N,M,Edges)){
    	cout<<"1"<<endl;
    }
    else
    cout<<"0"<<endl;
	
}

