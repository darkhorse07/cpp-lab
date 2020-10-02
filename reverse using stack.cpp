#include<iostream>
#include<stdlib.h>
using namespace std;
int y=1;
struct node
{
    int data;
  node* next;

};
node* start=NULL;

struct lstack{
node* data;
lstack* next1;
};
lstack* head=NULL;
void  push(node *temp1)
{
    lstack* temp;

    temp=(lstack*)malloc(sizeof(lstack*));
    temp->data=temp1;
    if(head==NULL)
    {
        head=temp;
        temp->next1=NULL;
        return ;
    }
    temp->next1=head;
    head=temp;
    return ;
}
node* pop()
{
    lstack* temp;
    node* x;
    if(head==NULL)
    {
        cout<<"underflow";
        y=5;
        return 0;
    }
    else
    {
        temp=head;
        head=temp->next1;
        x=temp->data;
        free(temp);
        return x;
    }
}

void printsl (node *temp3)
{
    if(temp3== NULL)
    return ;

    cout<<temp3->data<<endl;
    printsl(temp3->next);
}
int main()
{


    int d,k,j;
    cin>>d;
    node* temp,*temp1;
    for(int i=0;i<d;i++)
    {
        cin>>k;
        temp=(node*)malloc(sizeof( node*));
        temp->data=k;
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
    cout<<endl;
    printsl(start);

    lstack* temp2;
    node* temp5;
    temp5=start;

    push(start);

    while(temp5->next!=NULL)
    {


         push(temp5->next);
    }

    start=pop();

    while (y!=5)
    {
        temp5->next=pop();
        temp5=temp5->next;
    }
    cout<<endl;
    printsl(start);
    return 0;

}
