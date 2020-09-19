//program to merge two linked lists

#include<stdio.h>
#include<stdlib.h>


struct listNode{
	int data;
	struct listNode* link;
};

//redifining a listNode pointer
typedef struct listNode* lptr;

//function to count the number of nodes
int count(lptr p){
	int i=0;
	while(p!=NULL){
		p = p->link;
		i++;
	}
	return i;
}

//function for length1 <= length2
void directJoin(lptr list1, lptr2 list2){
	while(list1->next != NULL){
		list1 = list1->next;
	}	
	list1->next = list2;
}

//function for length1 > length2
void alternateJoin(lptr list1, lptr2 list2){
	while(list2 != NULL){
		list2->next = list1;
		list1->next = list2;
		list2 = list2->next;
		list2 = list2->next;
	}	
}

//main function
int main(){
	int length1, length2;

	lptr list1 = (lptr)malloc(sizeof(struct listNode));
	lptr list2  = (lptr)malloc(sizeof(struct listNode));

	printf("Enter the pointer to header of Linked List one : \n");
	scanf("%u", list1);
	printf("Enter the pointer to header of Linked List two : \n");
	scanf("%u", list2);
	length1 = count(list1);
	length2 = count(list2);

	if(length1 <= length2)
		directJoin(list1. list2);
	else
		alternateJoin(list1, list2);

	return 0;

}