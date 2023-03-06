#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
 int result;
  char string1[100] , string2[100];
  input_two_strings(&string1 , &string2);
  result=stringcompare(&string1 , &string2);
 output(&string1, &string2, result);
}
void input_two_strings(char *string1, char *string2)
{
printf("Enter first string:");
scanf("%s" , string1);
printf("Enter second string:");
scanf("%s" , string2);

}
int stringcompare(char *string1, char *string2)
{
  int result;
  if (*string1 > *string2 )
  {
    result= 1;  
  }
  else if (*string1 < *string2 )
  {
    result=-1;
  }
   else if (*string1 == *string2 )
  {
    result=0;
  }
  return result;


}
void output(char *string1, char *string2, int result)
{
  if (result == 0)
  {
  printf("%s is equal to %s" , string1 , string2);
  }
  else if (result ==-1)
  {
    printf("%s is greater than %s" , string2 , string1);
  }
  else if (result == 1)
  {
    printf("%s is greater than %s" , string1 , string2);
  }
}