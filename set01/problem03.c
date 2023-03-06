#include<stdio.h>
int input();
int add(int a , int b);
void output(int a , int b , int sum);
int main()
{

input();

}

int input()
{
  int a , b ,sum;
  printf("Enter first number:");
  scanf("%d" , &a);
  printf("Enter secondnumber:");
  scanf("%d" , &b);
  sum=add(a,b);
output(a,b,sum);
}
int add(int a, int b)
{
  int s;
  s=a+b;
  return s;
}
void output(int a, int b, int sum)
{
  printf("The sum of %d and %d is %d" , a , b , sum);
}