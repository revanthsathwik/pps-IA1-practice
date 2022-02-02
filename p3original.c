#include<stdio.h>
int input()
{
  int a;
  printf("enter the number \n");
  scanf("%d",&a);
  return a;
}
int sum_(int n)
{
  int i,sum=0;
  for(i=0;i<=n;i++)
  {
    sum=i+sum;
  }
  return sum;
}
void output(int n,int sum)
{
  printf("\nsum of %d numbers = %d",n,sum);
}
int main()
{
  int n,sum;
  n=input();
  sum=sum_(n);
  output(n,sum);
  return 0;
}