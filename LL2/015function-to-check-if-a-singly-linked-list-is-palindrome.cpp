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

L*mid(L*head)
{
    L*mid=head;
    int count=0;
    while(head!=NULL)
    {
        if(count & 1)
        mid=mid->next;

        count++;
        head=head->next;
    }
    return mid;
}

L*rev(L*head)
{

    L*prev=NULL,*curr=head,*k;
    while(curr)
    {
        k=curr->next;
        curr->next=prev;
        prev=curr;
        curr=k;

    }
    return prev;
}

bool palin(L*head)
{
   L*m=mid(head);

   m=rev(m);
   L*x=m;
   while(x && head->data==x->data)
   {
        head=head->next;
        x=x->next;
   }
   if(x==NULL)
   return true;
   else
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
    cout<<"List:"<<endl;
    display(head);
    //head=sep(head);
   // L*temp=mid(head);
    bool r=palin(head);
    cout<<r;

    return 0;
}



