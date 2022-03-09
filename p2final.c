#include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction x;
  printf("enter the fraction of the form n d\n");
  scanf("%d %d",&x.num,&x.den);
  return x;
}
Fraction Largest_fraction (Fraction f1, Fraction f2, Fraction f3)
{
  int cd = f1.den*f2.den*f3.den;
  int a=cd/f1.num;
  int b=cd/f2.num;
  int c=cd/f3.num;
  if (a > b && a > c)
     return f1;
  if( b  > c)
    return f2;
  
    return f3;
}
  
 
void output(Fraction f1, Fraction f2, Fraction f3,Fraction largest)
{
  printf("the largest of the three fraction is %d/%d",largest.num,largest.den);
}
int main()
{
  Fraction f1,f2,f3,largest;
  f1 = input_fraction();
  f2 = input_fraction();
  f3 = input_fraction();
  largest = Largest_fraction(f1,f2,f3);
  output(f1,f2,f3,largest);
}