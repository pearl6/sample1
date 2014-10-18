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

L*pairwise_swap(L*head)
{
    if(!head || !(head->next))
    return head;

    L*rem=head->next->next;
    head->next->next=head;

    L*newhead=head->next;

    head->next=pairwise_swap(rem);
    return newhead;
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
    L*head1=pairwise_swap(head);
    cout<<"List:"<<endl;
    display(head1);


    return 0;
}




