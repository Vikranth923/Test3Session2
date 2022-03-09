#include<stdio.h>
int input_degree()
{
  int x;
  printf("enter the degree of the polynomial\n");
  scanf("%d",&x);
  return x;
}
float input_x()
{
  float y;
  printf("enter the value of x\n");
  scanf("%f",&y);
  return y;
}
void input_coefficients(int n, float a[n])
{
  int i;
  printf("enter the coefficients\n");
  for(i=0;i<n;i++)
    {
      scanf("%f",&a[i]);
    }
}
float evaluate_polynomial(int n, float a[n],float x)
{
  float ans = a[0];
  for (int i=0;i<n-1;i++)
    {
      ans = (ans*x)+a[i+1];
    }
    return ans;
}
void output(int n, float a[n],float x, float result)
{
  printf("the value of the polynomial for x=%.2f\n%.2f",x,a[n-1]);
  for(int i=n-2;i>=0;i--)
    {
      printf(" + %2.fx^%d",a[i],n-i-1);
    }
  printf(" = %.2f\n",result);
}
int main()
{
  int d;
  float x,result;
  d =input_degree()+1;
  float a[d];
  x = input_x();
  input_coefficients(d,a);
  result = evaluate_polynomial(d,a,x);
  output(d,a,x,result);
}