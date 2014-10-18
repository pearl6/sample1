#include<iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node*next;
}L;
L*y;
L* insert(int k,L*head)
{
    L*temp=new L;
    temp->data=k;
    temp->next=NULL;

    if(head==NULL)
    {
        head=y=temp;
    }
    else
    {
        y->next=temp;
        y=temp;
    }
    //y->next=head;
    return head;
}

void display(L*head)
{
    L*p;
    p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

L*lst_to_frst(L*head)
{
    L*p=head,*k;
    while(p->next)
    {
       k=p;
       p=p->next;
    }
    k->next=NULL;
    p->next=head;
    head=p;

    return head;
}

int main()
{
    int d,ch=1,n;
   L*head=NULL;
   //~ L*head=NULL,*l2=NULL,*y;
   cout<<"Enter no - ";
    while(ch==1)
    {
        cout<<"Enter data for node : ";
        cin>>d;
        head=insert(d,head);
        cout<<"Do u wanna enter more nodes ? (1-->yes) : ";
        cin>>ch;

    }
    cout<<"List:"<<endl;
    display(head);
    //head=sep(head);
   // L*temp=mid(head);
    head=lst_to_frst(head);
    cout<<"List:"<<endl;
    display(head);


    return 0;
}




