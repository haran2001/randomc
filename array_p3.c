void main()
{
        int i,j,n=6,k,b[(n*(n+1))/2],Ltrig[6][6]={{1,0,0,0,0,0},{2,3,0,0,0,0},{4,5,6,0,0,0},{7,8,9,10,0,0},{11,12,13,14,15,0},{16,17,18,19,20,21}},Utrig={{0,7,7,7,7,7},{0,0,7,7,7,7},{0,0,0,7,7,7},{0,0,0,0,7,7},{0,0,0,0,0,0,7},{0,0,0,0,0,0}};//initialized 2 D array                                                                                                                                            printf("LTrig:\n");
        //printing Lower triangular matrix
	for(i=0;i<6;i++)
        {       for(j=0;j<6;j++)
                {
                        printf("%d\t",Ltrig[i][j]);
                }
                printf("\n");
      	//printing Upper triangular matrix
	for(i=0;i<6;i++)
        {       for(j=0;j<6;j++)
                {
                        printf("%d\t",Utrig[i][j]);
                }
                printf("\n");
	//taking transpose of upper triangular matrix
	for (i = 0; i < 6; ++i)
       		 for (j = 0; j < c; ++j) {
            		Utrig_transpose[j][i] = a[i][j];
        }
        
	//addressing formulae to attach both the upper and lower triangular matrices to c[]                                                                                                                                                                                                     }
        printf("c[]:\n");
        for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                        c[((i*(i+1))/2)+j]=Ltrig[i][j];//addressing formula to obtain b[] from Ltrig[][];
	 for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                        c[(((i*(i+1))/2)+j)+20]=Utrig_transpose[i][j];

	//given a value from c array , program to arrive at a[][] and b[][].
	printf("Enter the value of k\n");
	scanf("%d",&k);
	if(k>20)
		for (n=0; (k/(((n*(n+1))/2)<6);n++)
			c[k]=UTrig[n][k%((n*(n+1))/2)];
	else
		for (n=0; (k/(((n*(n+1))/2)<6);n++)
			c[k]=UTrig[n][k%((n*(n+1))/2)];
	   
   }

