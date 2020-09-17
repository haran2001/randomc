//determine array from matrix b
#include<stdio.h>
#include<stdlib.h>

//creating a 2d-array and initialize all elements to 0
int** create2dArray(int rows, int columns){
	int **x, i, j, k;
	x = (int**)malloc(rows*sizeof(int*));
	for(i=0; i<rows; i++){
		x[i] = (int*)malloc(columns*sizeof(int));
	}
	for(i = 0; i<rows; i++)
		for(j = 0; j<rows; j++)
			*(*(x+i) +j ) = 0;
	return x;
}

int main(){
	int *b;
	int **p;
	int i, j;
	int n, b_size;
	
	printf("Enter the size of array b (should be of the form 3*n-2)\n");
	scanf("%d\n", &b_size);
	
	if(((b_size+2)%3)==0){
		
		b = (int*)malloc(b_size*sizeof(int));
		
		for(i=0; i<b_size; i++)
			scanf("%d", b+i);
		
		//find the n value for nxn matrix
		n = (b_size+2)/3;

		//create nxn matrix
		p = create2dArray(n, n);

		for(i = 0; i<n; i++){
			for(j = 0; j<n; j++){
				switch(i-j){
					case -1:
						p[i][j] = b[2*n+i-1];
						break;
					case 0:
						p[i][j] = b[n+i-1];
						break;
					case 1:
						p[i][j] = b[i-1];
						break;
				}
			}
		}
	

		for(i = 0; i<n; i++){
			for(j = 0; j<n; j++){
				printf("%d ", p[i][j]);
			}
			puts("");
		}
	}
	
	else
		printf("Size of b is invalid\n");
	return 0;
}