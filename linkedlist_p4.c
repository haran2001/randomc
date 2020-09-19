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
                        printf("%d->",p->data);                                                                                                                                                                              p=p->link;                                                                                                                                                                                   }
                printf("%d",p->data);
        }
}

int length_CLL()
{
        struct node* temp=head;
        int count=0;
        if (head==NULL)
                return 0;
        else
        {       while(temp->link!=head)
                {       count++;
                        temp=temp->link;
                }
                return count +1;
        }
}
void main()
{
        int i;
        printf("Length of the cicular linked list is %d\n",length_CLL());
        for(i=0;i<5;i++)
                append_CLL();
        printf("The data of nodes of a CLL\n");
        display_CLL();
        printf("\nLength of the CLL is %d\n",length_CLL());
}