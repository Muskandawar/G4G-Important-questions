#include<iostream>
using namespace std;

class node
{   public:
    int data;
    node* next;
    node* down;
};
class linkedlist
{
public:
    node* head=NULL;
    void add(int data){

        node *temp=new node;
            node *p;
            temp->data=data;
            temp->next=NULL;
            temp->down=NULL;
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

    void display()
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
};



int main(){
    int mat[3][3]={1,2,3,4,5,6,7,8,9};
    linkedlist l[3];
    int k=0;
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        l[k].add(mat[i][j]);
    }
    k++;
    }



    for(int i=0;i<3-1;i++){
        node *temp = l[i].head;                         //l[0]      l[1]
        node *temp1 = l[i+1].head;                      //l[1]      l[2]

        while(temp->next!=NULL){
            temp->down = temp1;
            temp=temp->next;
            temp1=temp1->next;
        }
    }

//    for(int k=0;k<3;k++)
//        l[k].display();



cout<<l[1].head->down->data;


}
