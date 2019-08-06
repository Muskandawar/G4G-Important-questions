#include<iostream>
using namespace std;
class node
{   public:
    int data;
    node* next;
};
class linkedlist
{
public:
    node* head=NULL;
    void append(int n)
    {
        for(int i=0;i<n;i++)
        {
            node *temp=new node;
            node *p;
            int data;
            cout<<"enter data: ";
            cin>>data;
            temp->data=data;
            temp->next=NULL;
            if(head==NULL)
            {
                head=temp;
            }
            else
            {   p=head;
                while(p->next!=NULL)
                {
                    p=p->next;
                }
                p->next=temp;
            }
        }
    }
    void display()
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
    void deldupsorted()
    {
        node* temp=head;
        node* p=head;
        while(temp->next!=NULL)
        {
            if(temp->data==temp->next->data)
            {
                p=temp->next->next;
                delete(temp->next);
                temp->next=p;
            }
            else
            {
                temp=temp->next;
            }
        }
    }
    void deldupunsorted()
    {
        node* temp=head;
        node* p=head;
        node* q=head;
        while(temp!=NULL && temp->next!=NULL)
        {   p=temp;
            while(p->next!=NULL)
            {
                if(temp->data==p->next->data)
                {
                    q=p->next;
                    p->next=q->next;
                    delete(q);

                }
                else
                p=p->next;
            }
            temp=temp->next;
        }
    }
};

int main()
{   node* head=NULL;
    node* temp;
    int n,t;
    cout<<"enter value of n: ";
    cin>>n;
    linkedlist l;
    l.append(n);
    l.display();
    l.deldupunsorted();
    cout<<endl;
    l.display();
}
