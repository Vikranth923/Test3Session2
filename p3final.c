#include<stdio.h>
void input_n_and_r(int *n,int *r)
{
  printf("enter n and r in the form n r\n");
  scanf("%d %d",n,r);
}
int factorial(int x)
{
    if (x == 0)
        return 1;
    return x * factorial(x - 1);
}
int ncr(int n, int r)
{
  int nfact, rfact, nrfact;
  nfact = factorial(n);
  rfact = factorial(r);
  nrfact = factorial(n-r);
  return (nfact/(rfact*nrfact));
}
void output(int n, int r, int result)
{
  printf("the value of %dC%d is %d",n,r,result);
}
int main()
{
  int n,r,result;
  input_n_and_r(&n,&r);
  result = ncr(n,r);
  output(n,r,result);
}