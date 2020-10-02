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
    int n,x,g;
    cin>>n;
    node* temp,*temp1;
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
        g=temp->data;
        cout<<g<<endl;
        temp=temp->next;
    }
    return 0;

}
