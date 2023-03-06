#include <stdio.h>
struct _complex
 {
	float real;
	float imaginary;
};
typedef struct _complex Complex;
struct _complex a , b , sum;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

Complex input_complex()
{
  printf("Enter real part of first number=");
  scanf("%d" , &a.real);
  printf("Enter imaginary part of first number=");
  scanf("%d" , &a.imaginary);
  printf("Enter real part of second number=");
  scanf("%d" , &b.real);
  printf("Enter imaginary part of first number=");
  scanf("%d" , &b.imaginary);
}
Complex add_complex(Complex a, Complex b)
{
  sum.real=a.real + b.real;
  sum.imaginary=a.imaginary + b.imaginary;
}
void output(Complex a, Complex b, Complex sum)
{
  printf("Sum of two complex numbers:(%d) + (%di\n)" , sum.real , sum.imaginary);
  
}