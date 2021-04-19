#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void addEdge(vector<pair<int,int>> graph[], int u,int v , int wt)
{
graph[u].push_back({v,wt});
graph[v].push_back({u,wt});

}

void dijikstra(vector<pair<int,int>> graph[],int src , int n)
{

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
vector<int> dist(n,INT_MAX);
dist[src]=0;

pq.push({0,src});
while(!pq.empty())
{
int u=pq.top().second;
pq.pop();

for(auto it: graph[u]){
   int v=it.first;
   int w= it.second;
if(dist[v]>dist[u]+w)
{
    dist[v]=dist[u]+w;
    pq.push({dist[v],v});
}


}


}

for(int i=0;i<n;i++)
{

    cout<<"distance of src from "<<i<<" = "<<dist[i]<<endl;
}


}


int main()
{

int n=9;
vector<pair<int,int>> graph[n];
    addEdge(graph ,0, 1, 4); 
    addEdge(graph ,0, 7, 8); 
    addEdge(graph ,1, 2, 8); 
    addEdge(graph ,1, 7, 11); 
    addEdge(graph ,2, 3, 7); 
    addEdge(graph ,2, 8, 2); 
    addEdge(graph ,2, 5, 4); 
    addEdge(graph ,3, 4, 9); 
    addEdge(graph ,3, 5, 14); 
    addEdge(graph ,4, 5, 10); 
    addEdge(graph ,5, 6, 2); 
    addEdge(graph ,6, 7, 1); 
    addEdge(graph ,6, 8, 6); 
    addEdge(graph ,7, 8, 7); 
    
    dijikstra(graph,0,9);



return 0;
}
