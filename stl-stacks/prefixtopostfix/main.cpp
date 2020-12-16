#include <iostream>
#include<stack>
#include<string>


using namespace std;

bool isoperator(char &c)
{switch (c)
{
case '+':
case '-':
case '*':
case '/': return true;
}
return false;
}

void convert_prefix_to_postfix(string &exp)
{stack<string>a;

for(int i=exp.length()-1;i>=0;i--)
{if(isoperator(exp[i]))
    {string operand1=a.top();
    a.pop();
    string operand2=a.top();
    a.pop();
    string combine=operand1+operand2+exp[i];
    a.push(combine);
    }
else
{string s(1,exp[i]);
a.push(s);}

}
exp=a.top();

}

int main()
{
    string exp;
    exp="*+AB-CD";
    convert_prefix_to_postfix(exp);
    cout<<"Coverted expression is\n ";
    cout<<exp;
    return 0;
}
