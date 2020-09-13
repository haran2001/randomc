//program to read and display a polynimial
#include<stdio.h>
#include<stdlib.h>

#define MAX_DEGREE 100


//each poly struct is a polynomial
struct poly{
	int degree;
	float coef[MAX_DEGREE];
};

//redefineing struct poly*
typedef struct poly* polyptr;


//read function to read polynomial
polyptr read(int deg){
	polyptr p = (polyptr)malloc(sizeof(struct poly));
	int i;
	for(i=0; i<deg; i++){
		printf("Coefficient of x^%d : ", deg-i-1);
		scanf("%f", &p->coef[i]);
	}
	return p;
}

//display function to display polynomial
void display(polyptr p, int deg){
	int i;
	for(i=0; i<deg; i++){
		if(i!=deg-1)
			printf("%f x^%d + ", p->coef[i], deg-i-1);
		else
			printf("%f ", p->coef[i]);
	}
}

int main(){
	int deg;
	polyptr p = (polyptr)malloc(sizeof(struct poly));
	
	printf("Enter degree of polynomial\n");
	scanf("%d", &deg);
	p = read(deg);
	display(p, deg);
}