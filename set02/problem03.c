#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
int n , result;
n=input_number();
result=is_composite(n);
output(n , result);
}
int input_number()
{
  int n;
  printf("Enter the number:-");
  scanf("%d" , &n);
  return n;
}
int is_composite(int n)
{
  int i , result=0;
 for( i=1;i<=n;i++)
 {
 if(n%i==0)
 result++;
 }
return result;
}
void output(int n, int result)
{
  if(result>2)
  {
    printf("%d is a composite number" , n );
  }
  else
  {
    printf("%d is not a composite number" , n);
  }
}