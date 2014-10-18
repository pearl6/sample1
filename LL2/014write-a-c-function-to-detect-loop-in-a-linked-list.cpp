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

bool loop(L*head)
{
    L*fptr=head,*sptr=head;
    while(fptr && fptr->next && sptr)
    {
        sptr=sptr->next;
        fptr=fptr->next->next;
        if(sptr==fptr)
        return true;
    }
    return false;
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
    //cout<<"List:"<<endl;
    //display(head);
    //head=sep(head);
   // L*temp=mid(head);
    bool r=loop(head);
    cout<<r;

    return 0;
}


