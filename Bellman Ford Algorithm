#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct edge{

    int src,dst,wt;
};
int V, E;

void bellmanford(vector<edge> Edges)
{

int parent[V];
int cost_parent[V];
vector<int> value(V,INT_MAX);
value[0]=0;
parent[0]=-1;
bool repeated;
for(int i=0;i<V-1;i++)
{    
repeated=false;
for(int j=0;j<E;j++)
{
int u= Edges[j].src;
int v=Edges[j].dst;
int wt=Edges[j].wt;

if(value[u]!=INT_MAX && value[u]+wt< value[v])
{

value[v]=value[u]+wt;
parent[v]=value[u];
cost_parent[v]=value[v];
repeated=true;
}
}
if(repeated==false)
 break;
}

//check -ve edge cycle by relaxing one more time
for(int j=0;j<E;j++)
{
int u= Edges[j].src;
int v=Edges[j].dst;
int wt=Edges[j].wt;
if(value[u]!=INT_MAX && value[u]+ wt<value[v])
{
cout<<"graph has -ve cycle"<<endl;
return;
}
}
//print final answer
for(int i=0;i<V;++i)
		cout<<"  Cost to reach "<<i<<"from source 0 = "<<value[i]<<"\n";
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(NULL);
cin>>V>>E;
vector<edge> Edges(E);
for(int i=0;i<E;i++)
{
int src,dst,wt;
cin>>src>>dst>>wt;
Edges[i].src=src;
Edges[i].dst=dst;
Edges[i].wt=wt;
}
bellmanford(Edges);

return 0;
}
