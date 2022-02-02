#include<stdio.h>
int input_array_size()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    return n;
}
void input_array(int n,int a[n])
{
    
    printf("enter array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int sum_n_array(int n , int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
void output(int n,int a[n],int sum)
{
    for(int i=0;i<n;i++)
    {
    printf("%d+",a[i]);
    }
    printf("=%d",sum);
        
    }

int main()
{
    int n,sum;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_n_array(n,a);
    output(n,a,sum);
    return 0;
}