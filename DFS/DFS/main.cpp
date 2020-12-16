#include <iostream>
#include<list>


using namespace std;

class graph
{
int v;
list<int> *adj;

public:
graph(int n)
{this->v=n;
adj=new list<int>[v];
}

void add_edge(int v,int w)
{adj[v].push_back(w);}

void dfsutil(int v,bool visited[])
{visited[v]=true;
cout<<v<<"->";

for(auto i=adj[v].begin();i!=adj[v].end();i++)
    {if(!visited[*i])
    dfsutil(*i,visited);}

}

void dfs(int start)
{
bool *visited=new bool[v];
for(int i=0;i<v;i++)
visited[i]=false;

dfsutil(start,visited);
}

};
int main()
{
    graph a(4);
    a.add_edge(0,1);
    a.add_edge(0,2);
    a.add_edge(1,2);
    a.add_edge(2,0);
    a.add_edge(2,3);
    a.add_edge(3,3);
    a.dfs(2);


    return 0;
}

