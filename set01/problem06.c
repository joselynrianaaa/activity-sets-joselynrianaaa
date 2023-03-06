#include <stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main()
{
  input();
}
int input()
{
  int a,b,c,largest=0;
  printf("Enter first number:");
  scanf("%d" , &a);
  printf("Enter second number:");
  scanf("%d" , &b);
  printf("Enter third  number:");
  scanf("%d" , &c);
  compare(a,b,c,&largest);
  
}
void compare(int a, int b, int c, int *largest)
{
  int l=*largest;
  if(a>b && a>c)
  {
    largest = a;
  }
  else if (b>a && b>c)
  {
    largest = b;
  }
  else if (c>a && c>b)
  {
    largest = c;
  }
  else
  {
    largest = a;
  }
  output(a,b,c,largest);
}
void output(int a, int b, int c, int largest)
{
  printf("Largest number between %d %d %d is %d" , a , b , c , largest);
}
