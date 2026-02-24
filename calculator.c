#include<stdio.h>
int main () {
float a,b;
printf("enter a two numbers a and b :");
scanf("%f %f" , &a , &b);
char op;
printf( " enter the operation you want   to perform ")
scanf("%c" , &op);
switch (op) { 
case '+' : 
float sum = a + b ;
printf("addition:" , sum);

case '-' : 
float subtraction = a - b ;
printf(" difference:",  subtraction);

case '*'
float multiplication = a * b ;
printf  ( " multiplication:" , multiplication);

case '/' :
 float division = a / b ;
printf ("division:" , division);

}
