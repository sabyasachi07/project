#include<stdio.h>
void sede(int *p,int *b,int size2, int size)
{ 
       	int ab[20];
for(int i =0,j=0,k=size-1;i<(size+size2),j<size,k<(size+size2);i++,j++,k++)
 {  

	 ab[i]=p[j];
	 ab[i]=b[k];
    
 }     
for(int i=0;i<(size + size);i++)
	printf("%d",ab[i]);
 }

void main()
{
	int a[]={4,5,3,2,1};
        int b[]={3,6,2,5,8};
	int num=5,num1=5;
	sede(a,b,num,num1);
}	
