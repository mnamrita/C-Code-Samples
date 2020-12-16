#include <iostream>
#include <vector>



using namespace std;

void  rotate_by_90(vector<vector<int>> &a)
{vector<vector<int>> b;
b=a;
for(int i=0;i<a.size();i++)
for(int j=0;j<a.size();j++)
a[i][j]=b[j][a.size()-1-i];


}

int main()
{
    vector<vector<int>>a;
    a={{1,2,3},{4,5,6},{7,8,9}};
    rotate_by_90(a);
    cout<<"Rotated Matrix\n";
    for(int i=0;i<a.size();i++)
    {for(int j=0;j<a.size();j++)
    cout<<a[i][j]<<"\t";
    cout<<endl;
    }
    return 0;
}
