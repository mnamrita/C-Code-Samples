#include <iostream>
#include<list>
using namespace std;

class graph
{
int no_of_vertices;
list<int> *adj;

public:
graph(int num)
{this->no_of_vertices=num;
adj=new list<int>[num];
}

void add_edge(int n,int w)
{adj[n].push_back(w);
}

void dfs_util(int s,bool visited[])
{
visited[s]=true;
cout<<s<<"->";

for(auto i=adj[s].begin();i!=adj[s].end();i++)
    {if(!visited[*i])
        dfs_util(*i,visited);
        }
}

void dfs(int start)
{bool *visited=new bool[no_of_vertices];
for(int i=0;i<no_of_vertices;i++)
visited[i]=false;
dfs_util(start,visited);
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
