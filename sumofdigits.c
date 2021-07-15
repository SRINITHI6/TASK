#include <stdio.h>

int sum(int n)  {

   if(n!=0)

       return (n%10 + sum(n/10));

   else

       return 0;

}

int main()

{

   int n;

   printf("Enter num ");

   scanf("%d",&n);

   printf("Sum of  digits : %d",sum(n));

   return 0;

}


