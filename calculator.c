#include <stdio.h>
#include <float.h>

double GetFirstOperand();
double GetSecondOperand();
double Division(double firstOperand,double secondOperand);
double Addition(double firstOperand,double secondOperand);
double Subtraction(double firstOperand,double secondOperand);
double Multiplication(double firstOperand,double secondOperand);
int Menu();

int main(int argc, const char *argv[])
{
  int choice= Menu();
  if (choice==-1)
  {
    printf("Program stopped!\n");
    return 0;
  }
  //printf("%.10e\n",DBL_MIN );
  double firstOperand=GetFirstOperand();
  double secondOperand=GetSecondOperand();
  double result;
  switch (choice)
  {
    case 1:
      result=Addition(firstOperand,secondOperand);
    break;
    case 2:
      result=Subtraction(firstOperand,secondOperand);
    break;
    case 3:
      result=Multiplication(firstOperand,secondOperand);
    break;
    case 4:
    if (secondOperand==0)
    {
      printf("Division by zero\n");
      return 0;
    }
    else
    {
      result=Division(firstOperand,secondOperand);
    }
    break;
  }
  if (result<-DBL_MAX)
  {
    printf("Number underflow\n");
  }
  else if(result>DBL_MAX)
  {
    printf("Number overflow\n" );
  }
  else
  {
    printf("%lf\n",result );
  }
  return 0;
}

int Menu()
{
  int choice;
  do
  {
    printf("Choose one of the following operations:\n\n");
    printf("\tAdd (1)\n");
    printf("\tSubtract (2)\n");
    printf("\tMultiply (3)\n");
    printf("\tDivide (4)\n");
    printf("\tStop program (-1)\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice>4 && choice<-1)
    {
      printf("Input not allowed, please try again\n" );
    }
  }while(choice>4 && choice<-1);
  return choice;
}

double Multiplication(double firstOperand,double secondOperand)
{
  double result=firstOperand*secondOperand;
  return result;
}

double Addition(double firstOperand,double secondOperand)
{
  double result=firstOperand+secondOperand;
  return result;
}

double Division(double firstOperand,double secondOperand)
{
  double result=firstOperand/secondOperand;
  return result;
}

double Subtraction(double firstOperand,double secondOperand)
{
  double result=firstOperand-secondOperand;
  return result;
}

double GetFirstOperand()
{
  double firstOperator;
  printf("Please enter the first operand: \n" );
  scanf("%lf", &firstOperator);
  return firstOperator;
}

double GetSecondOperand()
{
  double secondOperator;
  printf("Please enter the second operand: \n\n" );
  scanf("%lf", &secondOperator);
  return secondOperator;
}
