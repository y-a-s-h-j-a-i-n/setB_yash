#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10],n,i,b;       
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
} 
b=i;    
printf("Before:");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}
printf(" After:");
for(i=0;i<b;i++)    
{    
printf("%d",a[i]);    
}         
}  
