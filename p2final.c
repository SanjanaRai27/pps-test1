#include<stdio.h> 
int input()
{
int num;
printf("Enter a number:\n");
scanf("%d",&num);
return num;  
}
int add(int num1,int num2)
{
  int sum;
  sum=num1+num2;
  return sum;
}
void output(int num1,int num2,int sum)
{
  printf("Sum of %d and %d is %d\n", num1,num2,sum);
}
int main()
{
  int num1,num2;
  num1=input();
  num2=input();
  int sum;
  sum=add(num1,num2);
  output(num1,num2,sum);
  return 0;
}