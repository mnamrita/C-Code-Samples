#include <iostream>
#include<string>

using namespace std;
int main()
{
string a,rev;
a="malayalam";
rev.resize(a.size());


for(int i=a.length()-1;i>=0;i--)
rev[a.length()-1-i]=a[i];

cout<<rev;
}
