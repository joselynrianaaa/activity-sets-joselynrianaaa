#include <stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main()
{
float base , height , area;
input(base , height);

}
void input(float base, float height)
{
  float area;
  printf("Enter base of the triangle:-");
  scanf("%f" , &base);
  printf("Enter height of the triangle:-");
  scanf("%f" , &height);
  find_area(base,height,&area);
  output(base , height , area);
}
void find_area(float base , float height, float *area)
{
  *area = (base * height)/2;
}
void output(float base, float height, float area)
{
  printf("The area of triangle with base %f and height %f is %f" , base , height , area);
}