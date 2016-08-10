#include<stdio.h>
 
int main()
{
   int a, b, c, d;
 
   printf("Enter two numbers to add\n");
   scanf("%d%d",&a,&b);
 
   c = a + b;
   d = a - b;
   printf("Add of nos are = %d\n",c);
   printf("Subtraction of nos are = %d\n",d);
   return 0;
}
