//program to obtain an addressing formula to obtain b[m] from a[i,j]
//constrains= array indexing starts from 0, while we are accessing it as 1,1
//formula used is commented below
//the realaship between i and j in the 0 part of the matric is that i>j; this is used in the if condition in the program .
#include<stdio.h>

void main()
{
        int i,j,n=6,b[(n*(n+1))/2],Ltrig[6][6]={{1,0,0,0,0,0},{2,3,0,0,0,0},{4,5,6,0,0,0},{7,8,9,10,0,0},{11,12,13,14,15,0},{16,17,18,19,20,21}};//initialized 2 D array
        printf("LTrig:\n");
        for(i=0;i<6;i++)
        {       for(j=0;j<6;j++)
                {
                        printf("%d\t",Ltrig[i][j]);
                }
                printf("\n");
        }
        printf("b[]:\n");
        for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                        b[((i*(i+1))/2)+j]=Ltrig[i][j];//addressing formula to obtain b[] from Ltrig[][];
        for(i=0;i<21;i++)
        printf("%d\t",b[i]);
        printf("\n");
        printf("Enter the address of Ltrig[][] to obtain its address in b[] form\n");
        scanf("%d%d",&i,&j);
        if((i<=0) || (j<=0) || (i>n) || (j>n) )
        {
                printf("Invalid location\n");
        }
        else
        {
                if (j<=i)

                        printf("Ltrig[%d][%d]=%d & b[%d]=%d\n",i,j,Ltrig[i-1][j-1],((((i-1)*i)/2)+(j-1)+1),b[(((i-1)*i)/2)+(j-1)]);//A[1,1] is the first element

                else

                        printf("Address belongs to upper triangular matrix, 0s of upper triangular matrix is not stored in b[]\n");
        }




}
