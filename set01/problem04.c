#include<stdio.h>
int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main()
{
input();

}
int input()
{
  int a,b,sum = 0;
  printf("Enter first number:");
  scanf("%d" , &a);
  printf("Enter second number:");
  scanf("%d" , &b);
  add(a,b,&sum);
  output(a,b,sum);
}
void add(int a, int b, int *sum)
{
  // int s=*sum;
  *sum = a+b;
}
void output(int a, int b, int sum)
{
  printf("The sum of %d and %d is %d" , a , b , sum);
}