//program to multiply two arrays
#include<stdio.h>
#include<stdlib.h>

//program to initialize an array
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

//program to multiply array a and b
void mult(int** a, int** b, int** c, int rows){
	int i, j, k;
	for(i = 0; i<rows; i++){
		for(j = 0; j<rows; j++){
			*(*(c+i)+j) = 0;
			for(k=0; k<rows; k++){
				*(*(c+i) + j) += ((*(*(a+i) + k)) * (*(*(b+k) + j)));
				
			}
		}
	}

 	for(i = 0; i<rows; i++){
 		for(j = 0; j<rows; j++){
 			printf("%d ", *(*(c+i) + j));
 		}
 		printf("\n");
 	}
		printf("\n");

 }


//main function
int main(){
	int **ptr1, **ptr2, **ptr3, i = 0,j = 0;
	int rows = 5, columns = 5;
	
	ptr1 = create2dArray(rows, columns);
	ptr2 = create2dArray(rows, columns);
	ptr3 = create2dArray(rows, columns);

	mult(ptr1, ptr2, ptr3, 5);

	return 0;
}