#include<stdio.h> 
#include<math.h> 
int main() 
{ 
float p,r,t,i; 
printf("Enter Principle Interest: "); scanf("%f", &p); 
printf("Enter Rate: "); 
scanf("%f", &r); 
printf("Enter Time: ");
scanf("%f", &t); 
float x= pow((1+(r/100)),t); 
i = p*x-p; 
printf("Simple Interest = %f",i); 
} 
