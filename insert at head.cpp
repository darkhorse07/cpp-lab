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
    node* temp;
    for(int i=0;i<n;i++)
    {
    cin>>x;
    temp=(node*)malloc(sizeof( node*));
    temp->data=x;
    temp->next=start;
    start = temp;


    if (start==NULL)
    temp->next=NULL;
    }


    for(int i=0;i<n;i++)
    {
        g=temp->data;
        cout<<g<<endl;
        temp=temp->next;
    }
    return 0;

}
