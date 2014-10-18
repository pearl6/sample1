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

    if(head==NULL)                                    ###########33333#######
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

L*intersec(L*n1,L*n2,int d)
{
    while(n1 && n2)
    {
       if(n1==n2)
       return n1;
       n1=n1->next;
       n2=n2->next;
    }
    return NULL;
}

void diff(L*h1,L*h2)
{
    int c1=0,c2=0,d=0,c=0;
    L*p1=h1,*p2=h2;
    while(p1!=NULL)
    {
      c1++;
      p1=p1->next;
    }
    while(p2!=NULL)
    {
      c2++;
      p2=p2->next;
    }

    d=c1-c2;
    if(d>0)
    {
       L*k1=h1;
       while(c<d)
       {
          k1=k1->next;
          c++;
       }
    L*i=   intersec(k1,h2,d);
    cout<<i->data;
    }
    else
    {
      L*k2=h2;
       while(c<d)
       {
          k2=k2->next;
          c++;
       }
       L*i=intersec(h1,k2,d);
       cout<<i->data;
    }


}

int main()
{
    int d,ch=1,n;
   L*head1=NULL,*head2=NULL;
   //~ L*head=NULL,*l2=NULL,*y;
   cout<<"1st list : "<<endl;
   cout<<"Enter no - ";
    while(ch==1)
    {
        cout<<"Enter data for node : ";
        cin>>d;
        head1=insert(d,head1);
        cout<<"Do u wanna enter more nodes ? (1-->yes) : ";
        cin>>ch;

    }
    cout<<"List:"<<endl;
    display(head1);

    cout<<"2nd list : "<<endl;
    cout<<"Enter no - ";
    ch=1;
    while(ch==1)
    {
        cout<<"Enter data for node : ";
        cin>>d;
        head2=insert(d,head2);
        cout<<"Do u wanna enter more nodes ? (1-->yes) : ";
        cin>>ch;

    }
    cout<<"List:"<<endl;
    display(head2);

    diff(head1,head2);



    //cout<<"List:"<<endl;
    //display(head);
    //head=sep(head);
   // L*temp=mid(head);


    return 0;
}



