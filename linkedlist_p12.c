//program to evaluate polynomial at point x

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
	int temp_exp, temp_count;
	float temp_coef;
	temp_count = n;
	polyptr p = (polyptr)malloc(sizeof(struct polyNode));
	p = NULL;
	
	for(int i=0; i<temp_count; i++){
		polyptr new = (polyptr)malloc(sizeof(struct polyNode));
		printf("Enter the exponent \n");
		scanf("%d", &temp_exp);
		printf("Enter the coefficient \n");
		scanf("%f", &temp_coef);
		
		new->coef = temp_coef;
		new->exp = temp_exp;
		new->link = NULL;
		
		if(p == NULL){
			p = new;
		}
		else{
			while(p->link != NULL)
				p = p->link;
			p->link = new;
		}
	}

	return p;
}

//raise function to find x^exp
float raise(float x, int exp){
	int i;
	float result = 1;
	for(i=0; i<exp; i++){
		result *= x;
	}	
	return result;
}

//evaluating at the point
float peval(polyptr p, float x, float result){
	while(p->link != NULL){
		printf("%f\n", result);
		result += ((p->coef)*(raise(x, p->exp)));
		p = p->link;
	}
	return result;
}

//main()
int main(){
	int n, m;
	float x, result;

	polyptr poly1 = (polyptr)malloc(sizeof(struct polyNode));
	
	printf("Enter the value of n\n");
	scanf("%d", &n);

	printf("For polynomial  \n\n");
	poly1 = pread(n);
	
	printf("Enter the value of x\n");
	scanf("%f", &x);
	result = peval(poly1, x, 0);
	printf("%f\n", result);
}