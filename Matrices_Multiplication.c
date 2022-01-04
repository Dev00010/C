//Program to multiply 2 matrices

#include<stdio.h>    

main()
{  
int a[3][3],b[3][3],mul[3][3],r,c,i,j,k;    

  
    
    for(i=0;i<3;i++)    
    {    
        for(j=0;j<3;j++)    
    	{    
      		printf("enter value for a[%d][%d]= ",i,j);
      		scanf("%d",&a[i][j]);    
    	}       
    }    
   
    for(i=0;i<3;i++)    
    {    
      for(j=0;j<3;j++)    
   	 {    
    	   printf("enter value for b[%d][%d]= ",i,j); 
	   		scanf("%d",&b[i][j]);    
     }    
    }      
    
    
printf("multiply of the matrix=\n");  
	  
   for(i=0;i<3;i++)    //Loop to multiply 2 Matrices
   {    
      for(j=0;j<3;j++)    
      {    
       mul[i][j]=0;    
      for(k=0;k<3;k++)    
      {    
          mul[i][j]+=a[i][k]*b[k][j];    
      }    
     }      
   }       


   for(i=0;i<3;i++)    
   {    
   for(j=0;j<3;j++)    
   {    
      printf("%d\t",mul[i][j]);    
   }          
    printf("\n");    
   }
}
