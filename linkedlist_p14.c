//print non zero elements of sparse matrix
#include<stdio.h>
#include<stdlib.h>

//creating a 2d-array and initialize all elements to 1
int** create2dArray(int rows, int columns){
	int **x, i, j, k;
	x = (int**)malloc(rows*sizeof(int*));
	for(i=0; i<rows; i++){
		x[i] = (int*)malloc(columns*sizeof(int));
	}
	for(i = 0; i<rows; i++)
		for(j = 0; j<rows; j++)
			*(*(x+i) +j ) = 1;
	return x;
} 

//main function
int main(){
	int **p;
	int i, j;
	int m, n;

	printf("Enter the number of rows\n");
	scanf("%d", &m);
	printf("Enter the number of columns\n");
	scanf("%d", &n);
	
	p = create2dArray(m, n);
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d", *(p+i)+j);
		}
	}
	
	printf("\n");
	printf("i\tj\tvalue\t\n");
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(*(*(p+i)+j)){
				printf("%d\t%d\t%d\t", i, j, *(*(p+i)+j));
				puts("");
			}
		}
	}

	return 0;
}