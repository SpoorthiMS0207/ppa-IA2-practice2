#include <stdio.h>
  int main()
  {
  int a,b,c;
  printf("Enter the three sides of triangle\n");
  scanf("%d%d%d",&a,&b,&c);

  if(a==b && a==c)
  {
    printf("The triangle is not scalene");
  }
  else if(a==b && b!=c)
    {
    printf("The triangle is not scalene");
    }
    else
   {
    printf("The triangle is  scalene");
   }
 }
  