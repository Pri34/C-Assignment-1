#include<stdio.h> 
#include<math.h> 
int main() 
{ 
float num,n; 
printf("Enter Number: "); 
scanf("%f", &num); 
printf("Enter the Nth root: "); scanf("%f", &n); 
float x = pow(num,1/n); 
printf("Nth root number= %f", x);
} 
