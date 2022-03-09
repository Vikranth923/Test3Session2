#include<stdio.h>
void input(int *num1,int *den1,int *num2, int *den2)
{
  printf("enter the fractions in the form n1 d1 n2 d2\n");
  scanf("%d %d %d %d",num1,den1,num2,den2);
}
int gcd(int a,int b)
{
  int i;
  if(a>b)
  {
    
    i=b;
  }
  else
  {
    i=a;
  }
  for(;i>0;i--)
    {
      if(a%i==0&&b%i==0)
      {
        
       return i;
      } 
    } 
}
void add(int num1,int den1,int num2, int den2, int *num3, int *den3)
{
  int g;
  
  *num3 = ((num1*den2)+(num2*den1));
  *den3 = (den1*den2);
  g = gcd(*num3,*den3);
  *num3 = *num3/g;
  *den3 = *den3/g;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("%d/%d + %d/%d = %d/%d",num1, den1, num2, den2, num3, den3);
}
int main()
{
  int n1,d1,n2,d2,n3,d3;
  input(&n1,&d1,&n2,&d2);
  add(n1,d1,n2,d2,&n3,&d3);
  output(n1,d1,n2,d2,n3,d3);
}