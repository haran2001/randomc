//program to delete the selected node
#include<stdio.h>
#include<stdlib.h>

//should any value be returned??
//can we assume that x is present in p

struct listNode{
	int data;
	struct listNode* link;
};

typedef struct listNode* lptr;

//delete function
void delete(lptr p, lptr x){
	lptr new = (lptr)malloc(sizeof(struct listNode));

	// if p is equal to x
	if(p == x){
		p = new;
		new->link = NULL;
	}
	
	//search for x 
	while(p->link != x)
		p = p->link;
	//if x is not found
	if(p->link == NULL)
		printf("The node x: %u is not in the Linked list \n", x);
	//if x is found
	else{
			p->link = p->link->link;
	}		
	
}


int main(){
	lptr p = (lptr)malloc(sizeof(struct listNode));
	lptr x = (lptr)malloc(sizeof(struct listNode));
	printf("Enter the node p: ");
	scanf("%u", p);
	printf("Enter the node x: ");
	scanf("%u", x);
	delete(p, x);
	return 0;
}