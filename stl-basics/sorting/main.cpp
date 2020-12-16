#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int>a;
    a.push_back(86);
    a.push_back(1);
    a.push_back(93);
    a.push_back(10);
    sort(a.begin(),a.end(),greater<int>());
    for(auto i=a.begin();i!=a.end();i++)
    cout<<*i<<endl;

}
