#include <iostream>
#include<list>
#include<array>
#include<deque>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    list<int>a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    for(auto i=a.rbegin();i!=a.rend();i++)
    cout<<*i<<endl;
    a.remove(20);
    cout<<"NOw list is\n";
    for(auto i=a.rbegin();i!=a.rend();i++)
    cout<<*i<<endl;
    a.push_front(56);
        a.sort();
    cout<<"Sorted list is\n";
     for(auto i=a.begin();i!=a.end();i++)
    cout<<*i<<endl;

    array<int,6>b={1,2,3,4,5};
    cout<<"NOw array\n";
    cout<<b.size();
    cout<<endl<<b.max_size();
    cout<<"Elements of array are\n";
    for(auto i=b.rbegin();i!=b.rend();i++)
    cout<<*i<<endl;


    cout<<"Now dequeue\n";
    deque<int>ar;
    ar.push_back(2);
    ar.push_front(1);
    ar.push_back(3);
    ar.push_front(10);
    ar.pop_front();
    ar.pop_back();
    cout<<"THe queue is\n";
    for(auto i=ar.rbegin();i!=ar.rend();i++)
    cout<<*i<<endl;
    ar.push_back(0);
    sort(ar.begin(),ar.end());

    //NOw Vectors
    vector<int>v;
    v.push_back(44);
    v.push_back(1);
    sort(v.begin(),v.end());
    for(auto i=v.rbegin();i!=v.rend();i++)
    cout<<*i<<endl;



    return 0;
}
