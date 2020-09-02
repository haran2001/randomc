//Find the length of linkedlist given the header

//The following test case (linked list with two nodes teat1 and test2) can be used
// to check program 
// output should be 2

// Testcase
// lptr test1 = (lptr)malloc(sizeof(struct listNode));
// lptr test2 = (lptr)malloc(sizeof(struct listNode));
// test1->data = 1;
// test1->link = test2;
// test2->data = 2;
// test2->link = NULL;
// printf("%u", test1);




#include<stdio.h>
#include<stdlib.h>


struct listNode{
	int data;
	struct listNode* link;
};

typedef struct listNode* lptr;


int count(lptr p){
	int i=0;
	while(p!=NULL){
		p = p->link;
		i++;
	}
	return i;
}

int main(){
	int result;
	lptr input = (lptr)malloc(sizeof(struct listNode));
	printf("Enter the header of Linked List: \n");
	scanf("%u", input);
	result = count(test1);
	printf("%d\n",result);
	return 0;	
}