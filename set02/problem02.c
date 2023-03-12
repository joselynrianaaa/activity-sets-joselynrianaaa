#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main()
{
  int a,b,c , isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene = check_scalene(a,b,c);
  output(a, b, c,isscalene);

}
int input_side()
{
  int x;
  printf("Enter side:-");
  scanf("%d" , &x);
  return x;
}
int check_scalene(int a , int b , int c)
{
  int isscalene;
  if(a!=b && b!=c && a!=c)
  {
isscalene = 0;
  }
  else
  {
isscalene = 1;
  }
  return isscalene;
}
void output(int a, int b, int c, int isscalene)
{
  if(isscalene==0)
  {
    printf("The triangle with sides %d %d and %d is a Scalene Triangle" , a,b,c);
  }
  else
  {
  printf("The triangle with sides %d %d and %d is not a Scalene Triangle" , a,b,c);
  }
}