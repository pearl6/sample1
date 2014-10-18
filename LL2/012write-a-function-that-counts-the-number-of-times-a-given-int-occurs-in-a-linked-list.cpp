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

int occur(int n, L*head)
{
    int count=0;
    L*p=head;

    while(p!=NULL)
    {
       if(p->data==n)
       count++;
       p=p->next;
    }
    return count;
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
   cout<<"Enter n : ";
   cin>>n;
   int c=occur(n,head);
    cout<<c;
    return 0;
}
