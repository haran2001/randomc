//linked lists programs
#include<stdio.h>
#include<stdlib.h>
//global definition of struct data type

struct node {
        int data;
        struct node* link;
};

struct node* root,*head,*x/*holds a circular linked list*/;//global variables will always get initialized to NULL value

void append_CLL()
{
        struct node *temp,*p;
        p=head;//we would want to leave the global value untouched
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter the node data\n");
        scanf("%d",&temp->data);
                                           temp->link=NULL;
        if(head==NULL)
        {
                head=temp;
                temp->link=head;
        }

        else
        {       while(p->link!=head)
                        p=p->link;
                p->link=temp;
                temp->link=head;
        }
}
void display_CLL()
{
        struct node *p;
        p=head;
        if(head==NULL)
                printf("No nodes present\n");
        else
        {
                while(p->link!=head)
                {
                        printf("%d->",p->data);
                        p=p->link;
                }
                printf("%d",p->data);
        }
}

int length_CLL()                                                                                                                                                                                     {                                                                                                                                                                                                            struct node* temp=head;                                                                                                                                                                              int count=0;                                                                                                                                                                                         if (head==NULL)                                                                                                                                                                                              return 0;
        else                                                                                                                                                                                                 {       while(temp->link!=head)                                                                                                                                                                              {       count++;
                        temp=temp->link;
                }                                                                                                                                                                                                    return count +1;
        }
}
//asumption we are alredy given the address of the node to be deleted, ie p is pointing to the node to be deleted
void delete(struct node *p)
{
        struct node* x=head,*temp=head;
        if(x==NULL)
                printf("No nodes avalable");
                                                        else
        {
                if(p==NULL)
                {
                        printf("No node to delete");
                }
                else
                {
                        //first node deletion
                        if(p==x)
                        {
                                //since it's a circular linked list last node must point to head node
                                //temp points to the last node
                                while(temp->link!=head)
                                {
                                        temp=temp->link;
                                }
                                x=p->link;
                                p->link=NULL;
                                free(p);
                                head=x;
                                temp->link=head;
                        }
                        else
                        {
                                while(temp->link!=p)
                                {
                                        temp=temp->link;
                                }
                                temp->link=p->link;
                                p->link=NULL;
                        }                                                                                                                                                                                            }                                                                                                                                                                                            }                                                                                                                                                                                            }                                                                                                                                                                                                                                                                                                                                                                                                         void reverse_links_CLL()
{                                                                                                                                                                                                            struct node *x,*p,*next;                                                                                                                                                                             x=head;
        p=x->link;
        while(p!=head)                                                                                                                                                                                       {
                next=p->link;
                p->link=x;
                x=p;
                p=next;

        }
        p->link=x;
}
void main()
{
        //test functions
        int i;
        printf("Length of the cicular linked list is %d\n",length_CLL());
        for(i=0;i<5;i++)
                append_CLL();
        printf("The data of nodes of a CLL\n");
        display_CLL();
        printf("\nLength of the CLL is %d\n",length_CLL());
        //delete fuction
        int loc=0;
        struct node * p=head;
        printf("The location of node to be deleted\n");
        scanf("%d",&loc);
        if(loc<=0||loc>length_CLL())
        {
                printf("Invaild location\n");
        }
        else
        {
                if(head==NULL)
                        printf("No nodes available\n");
                else
                {
                        if(loc==1)
                                delete(p);
                        else
                        {       for(i=1;i<loc;i++)
                                        p=p->link;
                                delete(p);                                                                                                                                                                                   }                                                                                                                                                                                            }                                                                                                                                                                                            }                                                                                                                                                                                                    //display nodes again                                                                                                                                                                                printf("The circular linked list displayed after deletion of node\n");
        display_CLL();                                                                                                                                                                                       printf("\n");                                                                                                                                                                                        printf("The reversed linked list is:\n");
        reverse_links_CLL();
        display_CLL();                                                                                                                                                                                       printf("\n");
        }