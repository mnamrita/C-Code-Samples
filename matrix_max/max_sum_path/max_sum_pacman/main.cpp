#include <iostream>
#include<vector>
#include<limits>



using namespace std;
double neg=-1*std::numeric_limits<double>::infinity();

int max1(int a,int b)
{return (a>b)?a:b;}

int max_sum_path(vector<vector<int>> &a,int m,int n)
{if(n<0||m<0)
return neg;
else if(m==0&&n==0)
    return a[m][n];
else
{return a[m][n]+max1(max_sum_path(a,m-1,n),max_sum_path(a,m,n-1));}
}




int main()
{   vector<vector<int>>m={{1,2,3},{2,56,0},{3,96,4}};

    int max_sum=max_sum_path(m,2,2);
    cout<<max_sum;

    return 0;
}
