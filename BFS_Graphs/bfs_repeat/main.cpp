#include <iostream>
#include<list>


using namespace std;

class graph
{
int v;
list<int> *adj;

public:

graph(int no)
{this->v=no;
adj=new list<int>[v];
}

void add_edge(int v,int w)
{adj[v].push_back(w);
}

void bfs(int s)
{
bool *visited=new bool[v];
for(int i=0;i<v;i++)
visited[i]=false;

visited[s]=true;
list<int>q;
q.push_back(s);

while(!q.empty())

{int current=q.front();
cout<<current<<"->";
q.pop_front();

for(auto i=adj[current].begin();i!=adj[current].end();i++)
    { if(visited[*i]==false)
        {visited[*i]=true;
        q.push_back(*i);
        }
        }

}

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
    a.bfs(2);


    return 0;

}
