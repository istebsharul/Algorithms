#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cout<<"Enter No.of nodes and Edges"<<endl;
    cin>>n>>e;
    vector<pair<int, int>> adj[n];

    int a,b,w;
    cout<<"put node1 and node2 and wt"<<endl;
    for(int i=0;i<e;i++){

        cin>>a>>b>>w;
        adj[a].push_back(make_pair(b,w));
        adj[b].push_back(make_pair(a,w));
    }

    int p[n];
    int key[n];
    bool mst[n];

    for(int i=0;i<n;i++){
        key[i]=INT_MAX;
        mst[i]=false;
        p[i]=-1;
    }

    key[0]=0;
    p[0]=0;

    for(int i=0;i<n-1;i++){
        int min=INT_MAX,u;
        for(int j=0;j<n;j++){
            if(mst[j]==false && key[j]<min){
                min=key[j];
                u=j;
            }
        }
        mst[u]=true;

        for(auto it: adj[u]){
            int v=it.first;
            int weight=it.second;
            if(mst[v]==false && weight<key[v]){
                p[v]=u,key[v]=weight;
            }
        }
    }
    cout<<"ans"<<endl;
    for(int i=0;i<n;i++){
        cout<<p[i]<<"-"<<i<<endl;
    }
    return 0;
}