#include<iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node*next;
}L;
L*y;
/*L* insert(int k,L*head)
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
*/
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

L*ins(L*head,L*new_node)
{
   if(head==NULL || (head->data>=new_node->data))
   {
        new_node->next=head;
        head=new_node;
   }
   else
   {
        L*p=head;
        while(p->next!=NULL && p->next->data<=new_node->data)
        p=p->next;

        new_node->next=p->next;
        p->next=new_node;
   }
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

        L*temp=new L;
    temp->data=d;
    temp->next=NULL;

        head=ins(head,temp);
        cout<<"Do u wanna enter more nodes ? (1-->yes) : ";
        cin>>ch;

    }
    cout<<"List:"<<endl;
    display(head);
    //head=sep(head);
   // L*temp=mid(head);
   /* cout<<"Enter data to b inserted : ";
    cin>>n;
    L*x=new L;
    x->data=n;
    x->next=NULL;
    head=ins(head,x);
    cout<<"List:"<<endl;
    display(head);
*/
    return 0;
}




