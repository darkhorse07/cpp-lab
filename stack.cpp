#include<iostream>
#include<stdlib.h>
using namespace std;
struct lstack{
int data;
lstack* next;
};
lstack* head=NULL;
void  push()
{
    lstack* temp;
    int x;
    temp=(lstack*)malloc(sizeof(lstack*));
    cin>>x;
    temp->data=x;
    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
        return ;
    }
    temp->next=head;
    head=temp;
    return ;
}
int pop()
{
    lstack* temp;
    int x;
    if(head==NULL)
    {
        cout<<"underflow";
    }
    else
    {
        temp=head;
        head=temp->next;
        x=temp->data;
        free(temp);
        return x;
    }
}
int top()
{
    if(head==NULL)
    {
        cout<<"underflow";
    }
    else
        return head->data;
}
void prints(lstack *temp3)
{
    if(temp3== NULL)
    return ;

    cout<<temp3->data<<endl;
    prints(temp3->next);
}
int main()
{
    int n,h,g;
    cin>>n;
    head=NULL;
    for(int i=0;i<n;i++)
        push();
    cout<<endl;
    prints(head);
    cin>>h;
    for(int i=0;i<h;i++)
        pop();
    prints(head);
    g=top();
    cout<<g;
}
