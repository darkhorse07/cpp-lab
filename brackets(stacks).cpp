#include <bits/stdc++.h>

using namespace std;

char a[100];
int top=-1;

void insertStack(char b)
{
    if(b=='('&&a[top]==')')
    {
        a[top]='\0';
        top--;
    }
    else if(b=='['&&a[top]==']')
    {
        a[top]='\0';
        top--;
    }
    else if(b=='{'&&a[top]=='}')
    {
        a[top]='\0';
        top--;
    }
    else
        {    top++;
    a[top]=b;}


}

int main()
{
    char s[100];
    cin>>s;

    int pos=strlen(s);

    while(pos--)
    {
        if(s[pos]=='('||s[pos]==')'||s[pos]=='['||s[pos]==']'||s[pos]=='{'||s[pos]=='}')
            insertStack(s[pos]);
    }

    if(strlen(a))
        cout<<"Unbalanced";
    else
        cout<<"Balanced";
    return 0;
}
