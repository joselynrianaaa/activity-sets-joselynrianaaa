#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
  float n,sqrroot;
  n=input();
  sqrroot=square_root(n);
  output(n,sqrroot);
}
float input()
{
  float n;
  printf("Enter a number:");
  scanf("%f" , &n);
  return n;
}
float square_root(float n)
{
  float sqrroot;
  int i;
    while (1)
    {
        i = i + 1;
        sqrroot = (n / sqrroot + sqrroot) / 2;
        if (i == n + 1) { break; }
    }
return sqrroot;
}
void output(float n, float sqrroot)
{
  printf("The square of %.1f is %f" , n,sqrroot);
}
