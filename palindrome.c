#include<stdio.h>
int main ()
{ int p, rem, rev = 0;  
    printf("enter a number :");
    scanf("%d",&p);
int temp = p;
    while(p!=0)
    { 
rem = p % 10;
rev = rev * 10 + rem;
p = p / 10;
    }

    if ( temp == rev)
    printf("the number is palindrome");
 else
   (printf("the number is not palindrome"));    
    

    
}
