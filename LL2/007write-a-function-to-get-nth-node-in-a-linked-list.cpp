/*#include<iostream>

using namespace std;

typedef struct node
{
   int info;
   struct node*next;
}L;

L*new_node(int data)
{
   L*temp;
   temp->info=data;
   temp->next-NULL;
   return temp;
}

L* create(L*head)
{
   int data,ans=1;
   L*y=head;
   while(ans==1)
   {
     cout<<"Enter data for node : ";
     cin>>data;
     L*temp=new_node(data);

     y->next=temp;
     y=y->next;

     cout<<"Do u want to more nodes? (1-->yes)";
     cin>>ans;
   }
   return head;
}

void display(L*head)
{
   L*p=head;
   while(p!=NULL)
   {
     cout<<p->info<<"  ";
     p=p->next;
   }
}

int main()
{
   L*head=NULL;
   int d;
   cout<<"Creating list"<<endl;
   cout<<"Enter data for head node:";
   cin>>d;
   head=new_node(d);
   head=create(head);

   cout<<"Displaying the list : "<<endl;
   display(head);
}
*/
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

L*nth_element(int n,L*head)
{
   L*p=head;
   int c=1;
   while(p!=NULL && c<n)
   {
     //if(c==n)
     //return p;
     p=p->next;
     c++;
   }
   return p;
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
    cout<<"Enter n : ";
    cin>>n;
    L*temp=nth_element(n,head);

    if(temp!=NULL)
    cout<<temp->data;
    return 0;
}
