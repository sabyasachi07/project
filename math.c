#include<stdio.h>
void sede(int *p,int *b,int size2, int size)
{ 
       int i=0 ,j=0; 
  while (i < size2 && j < size) 
  { 
    if (p[i] < b[j]) 
       printf("%d",p[i++]); 
      
    else if (b[j] < p[i]) 
        printf("%d",b[j++]); 
      
    else
    { 
        printf("%d",b[j++]);; 
       i++; 
    } 
  } 
  
 
  while(i < size2) 
     printf("%d",p[i++]);
     
 
  
  while(j < size) 
       printf("%d",b[j++]);
}
void main()
{
	int a[]={1,2,3,3,6};
        int b[]={2,3,5,7};
	int num=5,num1=5;
	sede(a,b,num,num1);
}	
