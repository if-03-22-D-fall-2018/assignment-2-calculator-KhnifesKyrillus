#include <stdio.h>

int GetFirstOperand();
int GetSecondOperand();

int main(int argc, const char *argv[])
{
    printf("Choose one of the following operations:\n");
    printf("\tAdd (1)\n");
    printf("\tSubtract (2)\n");
    printf("\tMultiply (3)\n");
    printf("\tDivide (4)\n");
    printf("\tStop program (-1)\n");
    int input;
    scanf("%d\n", &input);
    if (input<5 && input>=-1)
    {
      printf("Input is invalid!!!\n" );
      return 0;
    }
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
