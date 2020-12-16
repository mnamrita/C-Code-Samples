#include <iostream>
#include<stack>
#include<string>

using namespace std;
void display_stack(stack<char> &s)
{

stack<char>a=s;
cout<<"THe stack is\n";
while(!a.empty())
{
cout<<a.top()<<endl;
a.pop();
}
}

int check_balance(string &exp)
{
stack<char>s;
for(int i=0;i<exp.length();i++)
{
    if(exp[i]=='{'||exp[i]=='['||exp[i]=='(')
    {s.push(exp[i]);
    //display_stack(s);
    continue;}
    else if(exp[i]=='}')
    {
    if(s.top()!='{')
    {cout<<"NOt Banlanced"<<endl;
    return 0;}
    else
    {s.pop();
    //display_stack(s);
    }
    }
    else if(exp[i]==')')
    {
    if(s.top()!='(')
    {cout<<"NOt Banlanced"<<endl;
    return 0;}
    else
    {s.pop();
    //display_stack(s);
    }
    }

    else if(exp[i]==']')
    {
    if(s.top()!='[')
    {cout<<"NOt Banlanced"<<endl;
    return 0;}
    else
    {s.pop();
    //display_stack(s);
    }
    }

    else continue;

    }

if(s.empty())
{cout<<"Balanced";
return 1;}
else
{cout<<"Not Balanced";
return 0;}

}
int main()
{
    string exp;
    exp="{{()}[]}";
    int value=check_balance(exp);
    return 0;
}
