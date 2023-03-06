#include <stdio.h>
int input_array_size(); 
void input_array(int n, int a[n]); 
int sum_n_array(int n, int a[n]); 
void output(int n, int a[n],int sum);
int main()
{
  int n,sum,a[25];
  n=input_array_size();
  input_array(n,a);
  sum=sum_n_array(n,a);
  output(n,a,sum);

}
int input_array_size()
{
  int n;
  printf("Enter the size of the array:");
  scanf("%d" , &n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("Element %d=" , i+1);
    scanf("%d" , &a[i]);
  }
}
int sum_n_array(int n, int a[n])
{
  int sum=0,k;
  for(k=0;k<n;k++)
  {
    sum=sum+a[k];
  }
  return sum;
}
void output(int n, int a[n],int sum)
{
  int j;
  printf("%d" , a[0]);
  for(j=1 ; j <n ; j++)
  {
  printf("+%d" , a[j]);
  }
  printf(" is %d" , sum);
}