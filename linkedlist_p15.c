//program to get transpose of an array
#include<stdio.h>
#include<stdlib.h>

//function to initialize an array
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

//funtion to transpose the array
void transpose1(int**a, int rows, int columns){
	int i, j;
	for(i = 0; i<rows; i++){
		for(j = i; j<columns; j++){
			swap((*(a + i) + j), (*(a+j) + i));
			// printf("Hello, World");
		}
	}

	for(i = 0; i<rows; i++){
		for(j = 0; j<columns; j++){
			printf("%d ", *(*(a+i) + j));
		}
		printf("\n");
	}
		printf("\n");

}

int main(){
	int **ptr1, **ptr2, **ptr3, i = 0,j = 0;
	int rows = 5, columns = 5;
	
	ptr1 = create2dArray(rows, columns);
	ptr2 = create2dArray(rows, columns);
	ptr3 = create2dArray(rows, columns);
	add(ptr1, ptr2, ptr1, rows, columns);
	mult(ptr1, ptr2, ptr3, 5);
	
	ptr1[0][0] = 1;
	ptr1[0][1] = 1;
	ptr1[0][2] = 1;
	ptr1[0][3] = 1;
	ptr1[0][4] = 1;

	transpose(ptr1, 5);
	transpose1(ptr1, 5, 5);

	return 0;
}