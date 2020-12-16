#include <iostream>
#include<list>

using namespace std;


class graph{

int v;
list<int> *adj;

public:

graph(int number_vertices)
{this->v=number_vertices;
adj=new list<int>[v];
}

void add_edge(int v,int w)
{
adj[v].push_back(w);
}

void breadth_first_search(int s)
{

bool *visited=new bool[v];
for(int i=0;i<v;i++)
visited[i]=false;

list<int>queue;


visited[s]=true;
queue.push_back(s);

while(!queue.empty())
{
int node=queue.front();
cout<<node<<"->";
queue.pop_front();

for(auto i=adj[node].begin();i!=adj[node].end();i++)
{
    if(visited[*i]==false)
        {queue.push_back(*i);
        visited[*i]=true;}
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
    a.breadth_first_search(2);


    return 0;
}
