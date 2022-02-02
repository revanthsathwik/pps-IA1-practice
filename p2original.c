#include<stdio.h>
int input()
{
  int a;
  printf("enter the value of a\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  int large;
  if(a>b && a>c)
  {
    large=a;
  }
  else if(b>c && b>a)
 {
   large=b;
 } 
 else
 {
    large=c;
 }
 return large;
}
int output(int large)
{
  printf("large value %d\n",large);
}
int main()
{
  int a,b,c,ans;
  a=input();
  b=input();
  c=input();
  ans=cmp(a,b,c);
  output(ans);
  return 0;
}