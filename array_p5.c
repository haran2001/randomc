//The exceptional case is when saddle point is zero(then saddle point not found)

//Finding the saddle point

#include<stdio.h>
#include<stdlib.h>


//function to find saddle point

int findSaddlePoint(int**p, int m, int n){
	int i,j;
	int temp_row, temp_col, max_row;
	
	temp_row = **p;

	//finding maximum in column
	// max_row is the row where the maximum element is

	for(i=0; i<m; i++){
		if((**(p+i)) >= temp_row){
			temp_row = (**(p+i));
			max_row = i;
		}
	}

	//initializing temp_col to first element in max_row
	temp_col = *(*(p+max_row));
	
	//finding min in row
	for(j=0; j<n; j++){
		if((*(*(p+max_row) + j)) <= temp_col){
			temp_col = (*(*(p+max_row) + j));
		}

	}

	if(temp_col == temp_row) return temp_col;
	return 0;
}


//main function

void main(){
	int **p;
	int i, j, m, n, result;
	
	
	printf("Enter number of rows: \n");
	scanf("%d", &m);
	printf("Enter number of columns: \n");
	scanf("%d", &n);
	p = (int**)malloc(m*sizeof(int*));
	
	for(i=0; i<m; i++)
		p[i] = (int*)malloc(n*sizeof(int)); //declaring every pointer in p

	printf("Enter the values for the array: \n");

	//input
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d", (*(p+i)+j));
		}
	}
	
	result = findSaddlePoint(p, m, n);
	if(result != 0)
		printf("The saddle point is %d \n", result);
	else 
		printf("There is no saddle point :( \n");

	//output
	// for(i=0; i<m; i++){
	// 	for(j=0; j<n; j++){
	// 		printf("%d ", *(*(p+i)+j));
	// 	}
	// 	printf("\n");
	// }

}