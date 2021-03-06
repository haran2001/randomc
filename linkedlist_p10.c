//pread() to read a polynomial display() to display a polynomial

#include<stdio.h>
#include<stdlib.h>

//define node
struct polyNode{
	int exp;
	float coef;
	struct polyNode* link;
};

//redefine node
typedef struct polyNode* polyptr;

//pread() function to read a polynomial
polyptr pread(int n){
	int temp_exp, temp_count ;
	float temp_coef;

	temp_count = n;
	polyptr p = (polyptr)malloc(sizeof(struct polyNode));
	p = NULL;
	
	while(temp_count--){
		polyptr new = (polyptr)malloc(sizeof(struct polyNode));
		printf("Enter the exponent\n");
		scanf("%d", &temp_exp);
		printf("Enter the coefficient\n");
		scanf("%f", &temp_coef);
		
		new->coef = temp_coef;
		new->exp = temp_exp;
		new->link = NULL;
		
		if(p == NULL){
			p = new;
		}
		else{
			while(p->link != NULL){
				p = p->link;
			p->link = new;
			}
		}
	}

	return p;
}

//display to print poly
void display(polyptr poly){
	while(poly != NULL){
		if(poly->link != NULL)
			printf("%f*x^%d + ", poly->coef, poly->exp);
		else
			printf("%f*x^%d", poly->coef, poly->exp);
		poly = poly->link;
	}
}


//main()
int main(){
	int n, m;
	polyptr poly1 = (polyptr)malloc(sizeof(struct polyNode));
	
	printf("Enter the value of n(degree of polynomial)\n");
	scanf("%d", &n);

	poly1 = pread(n);
	
	display(poly1);
}