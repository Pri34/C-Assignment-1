#include<stdio.h> 
int main() 
{ 
float p,r,t,i; 
printf("Enter Principle Interest: ");
scanf("%f", &p); 
printf("Enter Rate: "); 
scanf("%f", &r); 
printf("Enter Time: "); 
scanf("%f", &t); 
i=(p*r*t)/100; 
printf("Simple Interest = %f",i); } 
