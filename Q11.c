#include<stdio.h> 
int main() 
{ 
float basic,da,ta,gross_salary; 
printf("Enter Basic Pay: "); 
scanf("%f", &basic); 
da = 0.10*basic; 
ta = 0.12*basic; 
gross_salary=basic+da+ta; 
printf("Simple Interest = %f",gross_salary); }
