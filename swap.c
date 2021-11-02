#include<stdio.h>  
 void main()    
{    
int a=1, b=2;      
printf("Numbers before swapping a = %d b = %d\n",a,b);      
a=a+b; // (1+2) a value becomes 3   
b=a-b; // (3-2) b value becomes 1  
a=a-b; // (3-1) a value becomes 2 
printf("Numbers after swapping a = %d b = %d\n",a,b);      
}   
