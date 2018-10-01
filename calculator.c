#include <stdio.h>

int GetFirstOperand();
int GetSecondOperand();

int main(int argc, const char *argv[])
{
  int input;
  do
  {
    printf("Choose one of the following operations:\n");
    printf("Add (1)\n");
    printf("Subtract (2)\n");
    printf("Multiply (3)\n");
    printf("Divide (4)\n");
    printf("Stop program (-1)\n\n");
    scanf("%d", &input);
    if (input>5 && input>=-1)
    {
      printf("Input is invalid!!!\n" );
    }
  }while(input<5 && input>=-1);
  int firstOperand=GetFirstOperand();
  int secondOperand=GetSecondOperand();
  switch (input)
  {
    case -1:
      return 0;
    break;
    case 1:

    break;
    case 2:

    break;
    case 3:

    break;
    case 4:

    break;
    }

    return 0;
}

int GetFirstOperand()
{
  int firstOperator;
  printf("Please enter the first operand: \n" );
  scanf("%d\n", &firstOperator);
  return firstOperator;
}
int GetSecondOperand()
{
  int secondOperator;
  printf("Please enter the second operand: \n" );
  scanf("%d\n", &secondOperator);
  return secondOperator;
}
