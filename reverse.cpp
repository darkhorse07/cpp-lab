#include <iostream>
#include<stdlib.h>

using namespace std;
struct node
{
    int data;
  node* next;

};
node* start;


int main()
{

    start =NULL;
    int n,x;
    cin>>n;
    node* temp,*temp1,*temp2;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        temp=(node*)malloc(sizeof( node*));
        temp->data=x;
        if (start==NULL)
        {
            start=temp;
            temp1=temp;
            temp->next=NULL;
        }
        else
        {
            temp1->next=temp;
            temp1=temp;
            temp->next=NULL;
        }
    }
    temp=start;
    for(int i=0;i<n;i++)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
    temp=start->next;
    temp1=start;
    temp2=start;
    while(temp!=NULL)
    {
        temp1=temp;
        temp=temp->next;
        temp1->next=temp2;
        temp2=temp1;
    }
    start->next=NULL;
    start=temp1;
    temp=start;
    for(int i=0;i<n;i++)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    return 0;

}
