{
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
void printList(struct node *node)
{
    while(node!=NULL){
        cout<<node->data<<' ';
        node = node->next;
    }
    printf("
");
}
void push(struct node** head_ref, int new_data)
{
    struct node* new_node =	(struct node*) malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
struct node* makeUnion(struct node* head1, struct node* head2);
int main()
{
    long test;
    cin>>test;
    while(test--)
    {
        struct node* a = NULL;
        struct node* b = NULL;
        int n, m, tmp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp;
            push(&a, tmp);
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>tmp;
            push(&b, tmp);
        }
        printList(makeUnion(a, b));
    }
    return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
};
*/
struct node* makeUnion(struct node* head1, struct node* head2)
{
    set<int,greater<int>>s1;
    node* temp=head1;
    while(temp!=NULL)
    {
        s1.insert(temp->data);
        temp=temp->next;
    }
    temp=head2;
    while(temp!=NULL)
    {
        s1.insert(temp->data);
        temp=temp->next;
    }
    node* head=NULL;
    set<int,greater<int>> :: iterator it;
    for(it=s1.begin();it!=s1.end();it++)
    {
        push(&head,*it);
    }
    return head;

}
