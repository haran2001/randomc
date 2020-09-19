//program to multiply to polynomials ussing arrays
#include<stdio.h>
#include<stdlib.h>
//program without functions
void main()
{
        //n and m are orders of the polynomial therefore n+1 and m+1 are the array sizes
        int n,m,j,i,a[n+1],b[m+1],mul[n+m+1];
        printf("Enter the degree of polynomial 1 and polynomial 2\n");
        scanf("%d%d",&n,&m);
        printf("Enter the coeffs of the polynomial 1 in the form a0+a*x+a2*x^2...\n");
        for(i=0;i<=n;i++)
        {       printf("Enter the coeff of x^%d\n",i);
                scanf("%d",&a[i]);
        }
        printf("Enter the coeffs of polynomial 2\n");
        for(i=0;i<=m;i++)
        {
                printf("Enter the coeff of x^%d\n",i);
                scanf("%d",&b[i]);
        }
        for(i=0;i<n+m+1;i++)
                mul[i]=0;
        for(i=0;i<=n;i++)
        {
                for(j=0;j<=m;j++)
                        mul[i+j]+=a[i]*b[j];
        }
        printf("The product of the two polynomials\n");

        for(i=0;i<=n+m;i++)
        {
                printf("%d*x^%d\t",mul[i],i);
        }
        printf("\n");
}
