#include <iostream>

#include<algorithm>

using namespace std;

struct student{
int no;
int marks;};

bool compare(const student &lhs, const student &rhs)
{return lhs.no<rhs.no;}

int main()
{
    student s[10];
    for(int i=9;i>=0;i--)
    {
    s[i].no=i+1;
    cout<<"Enter marks\n";
    cin>>s[i].marks;}
    sort(s,s+10,compare);

    cout<<"\nSorted :\n";
    for(int i=0;i<10;i++)
    cout<<endl<<s[i].no<<":\t"<<s[i].marks;


    return 0;
}
